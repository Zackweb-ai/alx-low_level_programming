#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *allocate_buffer_for_file_contents(char *output_file);
void safely_close_file_descriptor(int fd);

/**
 * allocate_buffer_for_file_contents - Allocates a 1024-byte buffer for file contents.
 * @output_file: The name of the file to which data will be copied.
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *allocate_buffer_for_file_contents(char *output_file)
{
char *data_buffer;

data_buffer = malloc(sizeof(char) * 1024);

if (data_buffer == NULL)
{
dprintf(STDERR_FILENO,
"Error: Can't allocate memory for %s\n", output_file);
exit(99);
}

return (data_buffer);
}

/**
 * safely_close_file_descriptor - Closes a file descriptor and handles errors.
 * @fd: The file descriptor to be closed.
 */
void safely_close_file_descriptor(int fd)
{
int close_result;

close_result = close(fd);

if (close_result == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
}

/**
 * main - Copies the contents of one file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect - exit code 97.
 * If the source file does not exist or cannot be read - exit code 98.
 * If the destination file cannot be created or written to - exit code 99.
 * If file descriptors cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
int source_file, destination_file, read_result, write_result;
char *data_buffer;

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}

data_buffer = allocate_buffer_for_file_contents(argv[2]);
source_file = open(argv[1], O_RDONLY);
read_result = read(source_file, data_buffer, 1024);
destination_file = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

do {
if (source_file == -1 || read_result == -1)
{
dprintf(STDERR_FILENO,"Error: Can't read from file %s\n", argv[1]);
free(data_buffer);
exit(98);
}

write_result = write(destination_file, data_buffer, read_result);
if (destination_file == -1 || write_result == -1)
{
dprintf(STDERR_FILENO,"Error: Can't write to %s\n", argv[2]);
free(data_buffer);
exit(99);
}

read_result = read(source_file, data_buffer, 1024);
destination_file = open(argv[2], O_WRONLY | O_APPEND);

} while (read_result > 0);

free(data_buffer);
safely_close_file_descriptor(source_file);
safely_close_file_descriptor(destination_file);

return (0);
}

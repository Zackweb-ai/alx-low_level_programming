#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints its contents to STDOUT.
 * @filename: The name of the text file to be read.
 * @letters: The number of characters to be read and printed.
 * Return: The actual number of bytes read and printed (w) or 0 on failure.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *data_buffer;
	ssize_t file_descriptor;
	ssize_t bytes_written;
	ssize_t total_bytes;

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
	return (0);
	data_buffer = malloc(sizeof(char) * letters);
	total_bytes = read(file_descriptor, data_buffer, letters);
	bytes_written = write(STDOUT_FILENO, data_buffer, total_bytes);

	free(data_buffer);
	close(file_descriptor);
	return (bytes_written);
}

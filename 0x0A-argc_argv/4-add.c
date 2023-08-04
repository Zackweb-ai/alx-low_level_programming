#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	char *i;
	while (--argc)
	{
		for (i = argv[argc]; *i; i++)
			if (*i < '0' || *i > '9')
				return (printf("Error\n");
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}

#include "main.h"

/**
 * puts2 - The function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */

void puts2(char *str)
{
	int lenght = 0;
	int c = 0;
	char *d = str;
	int i;

	while (*d != '\n')
	{
		d++;
		lenght++;
	}
	c = lenght - 1;
	for (i = 0; i <= c; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i];
		}
	}
	_putchar('\n');
}

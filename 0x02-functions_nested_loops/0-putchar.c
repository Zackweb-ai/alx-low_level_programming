#include <stdio.h>
/**
* imain - Entry point
* Description: prints _putchar, followed by a new line.
* followed by a new line.
* Return: Always 0 (Success)
*/
int main(void)
{
	char my_char[] = '_putchar';

	for (i = 0 ; my_char[i] != '\0'; i++)
	{
		putchar(my_char[i]);
	}
	putchar('\n');
	return (0);
}

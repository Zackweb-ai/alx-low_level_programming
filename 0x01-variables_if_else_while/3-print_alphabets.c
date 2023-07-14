#include <stdio.h>
/**
*main - Entry point
* prints the alphabet in lowercase, and then in uppercase,
* followed by a new line.
* Return: Always 0 (Success)
*/
int main(void)
{
	char my_char = 'a';
	char my_CHAR = 'A';

	while (my_char <= 'z')
	{
		putchar(my_char);
		my_char++;
	}
	while (my_CHAR <= 'Z')
	{
		putchar(my_CHAR);
		my_CHAR++;
	}
	putchar('\n');
	return (0);
}

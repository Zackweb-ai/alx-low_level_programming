#include <stdio.h>
/**
*main - Entry point
*prints the alphabet in lowercase, followed by a new line.
* followed by a new line.
* Return: Always 0 (Success)
*/
int main(void)
{
	char my_char = 'a';

	while (my_char <= 'z')
	{
		if (my_char == 'e' || my_char == 'q')
			my_char++;
		putchar(my_char);
		my_char++;
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>
/**
*main - Entry point
* followed by a new line
* prints the lowercase alphabet in reverse, followed by a new line..
* Return: Always 0 (Success)
*/
int main(void)
{
	char my_char = 'z';

	while (my_char >= 'a')
	{
		putchar(my_char);
		my_char--;
	}
	putchar('\n');
	return (0);
}

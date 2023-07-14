#include <stdio.h>
/**
*main - Entry point
* followed by a new line
* prints all the numbers of base 16 in lowercase, followed by a new line.
* Return: Always 0 (Success)
*/
int main(void)
{
	int my_digit = 48; /*48: decimal rep of 0*/

	while (my_digit <= 102) /*102: decimal rep of f*/
	{
		putchar(my_digit);
		if (my_digit ==57)
			my_digit += 39;
		my_digit++;
	}
	putchar('\n');
	return (0);
}

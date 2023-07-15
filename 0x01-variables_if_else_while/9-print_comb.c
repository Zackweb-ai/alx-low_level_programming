#include <stdio.h>
/**
*main - Entry point
* prints all possible combinations of single-digit numbers.
* Return: Always 0 (Success)
*/
int main(void)
{
	int my_digit = 0;

	while (my_digit <= 9)
	{
		putchar(my_digit + 48);
		if (my_digit != 9)
		{
			putchar(',');
		}
		my_digit++;
	}
	putchar('\n');
	return (0);
}

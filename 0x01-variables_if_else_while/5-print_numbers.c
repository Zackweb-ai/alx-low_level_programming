#include <stdio.h>
/**
*main - Entry point
*prints all single digit numbers of base 10 starting from 0,
*followed by a new line.
* followed by a new line.
* Return: Always 0 (Success)
*/
int main(void)
{
	int my_digit = 0;

	while (my_digit <= 9)
	{
		printf("%d", my_digit);
		my_digit++;
	}
	printf("\n");
	return (0);
}

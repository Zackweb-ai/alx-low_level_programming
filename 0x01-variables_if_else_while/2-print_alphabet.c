#include <stdio.h>
/**
* main - Entry point
* a program that prints the alphabet in lowercase, followed by a new line.      
* Return: Always 0 (Success)
*/
int main(void)
{
	char my_char = 'a';

	while (my_char <= 'z')
	{
		putchar(my_char);
		my_char++;
	}
	putchar('\n');
	return (0);

}

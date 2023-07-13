#include <unistd.h>
/**
 *  main - Entry point
 *  Description: "prints exactly and that piece of art is useful\" -
 *  Dora Korpar,2015-10-19\" followed by a new line " using unistd library
 *  Return: 1 (error)
 */
int main(void)
{
	char quot[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, quot, 59);
	return (1);
}

#include <unistd.h>
#include "main.h"

/**
 * _putchar: Writes the character c.
 * return: 1 on (success)
 * 
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

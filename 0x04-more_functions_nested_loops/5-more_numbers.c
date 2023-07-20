#include "main.h"

/**
 * more_numbers -  prints 10 times the numbers, from 0 to 14,
 *	followed by a new line.
 * Return: always 0 (Success)
 */

void more_numbers(void)
{
	int num, rw, cnt;

	for (rw = 1; rw <= 10; rw++)
	{
		for (cnt = 0; cnt <= 14; cnt++)
		{
			num = cnt;
			if (cnt > 9)
			{
				_putchar(1 + 48);
				num = cnt % 10;
			}
			_putchar(num + 48);
		}
		_putchar('\n');
	}
}

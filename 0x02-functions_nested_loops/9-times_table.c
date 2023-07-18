#include "main.h"

/**
 * times_table - prints the 9 times table.
 *
 */

void times_table(void)
{
	int num, multi, pd;

	for (num = 0; num <= 9; num++)
	{
		_putchar(48);
		for (multi = 1; multi <= 9; multi++)
		{

			pd = num * multi;

			if (pd == 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(pd + 48);
			}
			else if (pd >= 10)
			{
				_putchar(',');
			        _putchar(' ');
											                                 _putchar(pd + 48);
			_putchar((pd % 10) + 48);
			}
		}
		putchar('\n');
	}
}


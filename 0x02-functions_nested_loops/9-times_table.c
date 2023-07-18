#include "main.h"

/**
 * times_table - prints the 9 times table.
 *
 */

void times_table(void)
{
	int num, multi, pd;

	for (nuù =0; num <= 9; num++)
	{
		_putchar(48);
		for (multi =1; multi <= 9; multi++)
		{
			_putchar('.');
			_putchar(' ');

			pd = num * multi;

			if (pd <= 9)
				_putchar(' ');
			else
				_putchar((pd / 10) + 48);

			_putchar((pd % 10) + 48);
		}
		putchar('\n');
	}
}


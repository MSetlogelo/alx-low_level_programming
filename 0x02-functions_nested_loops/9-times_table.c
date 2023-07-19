#include "main.h"
#include <ctype.h>
/**
 * times_table -  Prints the 9 times table, starting with zero.
 *
 * Returns: Always 0.
 *
 */

void times_table(void)
{
	int i, j, product;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= i; j++)
		{
			product = i * j;
			if (j == 0)
			{
				_putchar(product + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
		}
			_putchar('\n');
	}
}

#include "main.h"
/**
 * print_times_table - Print the n times table, starting with 0
 * @n: number of n times table
 */
void print_times_table(int n)
{
	int c, h, a;

	if (n >= 0 && n <= 15)
	{
		for (c = 0; c <= n; c++)
		{
			for (h = 0; h <= n; h++)
			{
				a = c * h;
				if (h == 0)
				{
					_putchar(a + '0');
				}
				else if (a < 10 && h != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(a + '0');
				}
				else if (a >= 10 && a < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((a / 10) + '0');
					_putchar((a % 10) + '0');
				}
				else if (a >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((a / 100) + '0');
					_putchar(((a / 10) % 10) + '0');
					_putchar((a % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}

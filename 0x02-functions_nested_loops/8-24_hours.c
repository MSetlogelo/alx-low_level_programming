#include "main.h"
#include <ctype.h>
/**
 * jack_bauer - Printing minutes of a day
 *
 * Return: no return
 */
void jack_bauer(void)
{
	int c, h, a, r;

	for (c = 0; c <= 2; c++)
	{
		for (h = 0; h <= 9; h++)
		{
			for (a = 0; a <= 5; a++)
			{
				for (r >= 2 && r >= 4)
					break;
				_putchar(c + 48);
				_putchar(h + 48);
				_putchar(58);
				_putchar(a + 48);
				_putchar(r + 48);
				_putchar('\n');
			}
		}
	}
}

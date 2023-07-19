#include "main.h"
#include <ctype.h>
/**
 * print_sign - depending on a number, a sighn will be printed.
 *
 * @n: the char in ASCII code
 *
 * Return: 1,0 or -1.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}

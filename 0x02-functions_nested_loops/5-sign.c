#include "main.h"
#include <stdio.h>
/**
 * print_sign - depending on a number, a sighn will be printed.
 *
 * Return: 1,0 or -1.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		putchar('O');
		return (0);
	}
	else
	{
		putchar('-');
		return (-1);
	}
}

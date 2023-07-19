#include "main.h"
/**
 * print_last_digit - Printing last digit
 *
 * @c: input number as int
 *
 * Return: last digit
 */
int print_last_digit(int c)
{
	int h;

	h = c % 10;
	if (h < 0)
	{
		_putchar(-h + 48);
		return (-h);
	}
	else
	{
		_putchar(h + 48);
		return (h);
	}
}

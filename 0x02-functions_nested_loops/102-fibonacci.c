#include <stdio.h>
/**
 * main - Print the first 50 Fibonacci numbers, from 1 and 2
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int c, h, a, r;

	h = 1;

	a = 2;

	for (c = 1; c <= 50; c++)
	{
		if (h != 20365011074)
		{
			printf("%ld,", h);
		}
		else
		{
			printf("%ld\n", h);
		}
		r = h + a;
		h = a;
		a = r;
	}
	return (0);
}

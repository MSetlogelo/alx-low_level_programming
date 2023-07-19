#include <stdio.h>

/**
 * main - print the sum of the even numbers
 *
 * return: Always 0 (Success)
 */
int main(void)
{
	int c;
	unsigned long int h, a, r, n, sum;

	h = 1;
	a = 2;
	sum = 0;

	for (c = 1; c <= 33; ++c)
	{
		if (h < 4000000 && (h % 2) == 0)
		{
			sum = sum + h;
		}

		n = h + a;
		c = a;
		a = n;
	}
	printf("%lu\n", sum);

	return (0);

}

#include <stdio.h>

/**
 * main - print the sum of the even numbers
 *
 * return: Always 0 (Success)
 */
int main(void)
{
	int c;
	int h, a, sum;

	h = 1;
	a = 2;
	sum = 0;

	while (a < 4000000)
	{
		if (a % 2 == 0)
			sum += a;

		c = a;
		a += h;
		h = c;
	}
	printf("%d\n", sum);

	return (0);

}

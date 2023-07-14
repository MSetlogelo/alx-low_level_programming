#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int lDigit;

srand(time(0));
	n = rand() - RAND_MAX / 2;
	lDigit = n % 10;

	printf("The string Last digit of %d is", n);

if (lDigit > 5)
{
	printf(" and is greater than 5\n", n);
}

	else if (lDigit == 0)
{

	printf(" and is 0\n", n);
}

	else
{
	printf(" and is less than 6 and not 0\n", n);
}

	return (0);
}

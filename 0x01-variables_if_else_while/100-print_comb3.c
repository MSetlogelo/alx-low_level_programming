#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c, h;

	for (c = 0; c < 9; c++)
{
	for (h = c + 1; h < 10; h++)
{
	putchar('0' + c);
	putchar('0' + h);
if (c != 8 || h != 9)
{
	putchar(',');
	putchar(' ');
}
}
}
	putchar('\n');
	return (0);
}

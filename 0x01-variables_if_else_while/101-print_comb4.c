#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c, h, r;

	for (c = 0; c < 8; c++)
{
	for (h = c + 1; h < 9; h++)
{
	for (r = h + 1; r < 10; r++)
{
	putchar('0' + c);
	putchar('0' + h);
	putchar('0' + r);
if (c != 7 || h != 8 || r != 9)
{
	putchar(',');
	putchar(' ');
}
}
}
}
	putchar('\n');
	return (0);
}

#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c, h;

	for (c = 0; c < 100; c++)
{
	for (h = c + 1; h < 100; h++)
{
	putchar('0' + c / 10);
	putchar('0' + c % 10);
	putchar(' ');
	putchar('0' + h / 10);
	putchar('0' + h % 10);
if (c != 99 || h != 99)
{
	putchar(',');
	putchar(' ');
}
}
}
	putchar('\n');
	return (0);
}

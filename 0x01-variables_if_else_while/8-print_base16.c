#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;

for (ch = 0; ch < 16; ch++)
{
	if (ch < 10)
{
	putchar('0' + ch);
}
	else
{
	putchar('a' + (ch - 10));
}
	putchar('\n');
	return (0);
}

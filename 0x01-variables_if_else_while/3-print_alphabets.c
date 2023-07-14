#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;
	char ab;

	for (ch = 'a'; ch <= 'z'; ch++)
{
	putchar(ch);
}
	for (ab = 'A'; ab <= 'Z'; ab++)
{
	putchar(ab);
}
	putchar('\n');
	return (0);
}

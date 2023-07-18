#include "main.h"
/**
* print_alphabet - Prints the alphabet in lowercase
*
* Return: Always 0 (Success)
*/
void print_alphabet_x10(void)
{
	char alpha = 'a';
	int c = 0;

	while (c <= 260)
	{
	_putchar(alpha);
	alpha++;
	if (alpha > 'z')
	{
		alpha = 'a';
	}
	alpha++;
	}
	_putchar('\n');
}

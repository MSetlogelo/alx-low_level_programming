#include "main.h"
/**
* print_alphabet - Prints the alphabet in lowercase
*
* Return: Always 0 (Success)
*/
void print_alphabet_x10(void)
{
	int c, h;
	char alpha;

	for (c = 0; c < 10; c++)
	{
		alpha = 'a';

		while (alpha <= 'z')
		{
		_putchar(alpha);
		alpha++;
		}
	}
	_putchar('\n');
}

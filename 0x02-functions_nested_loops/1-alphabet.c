#include "main.h"
/**
* print_alphabet - Prints the alphabet in lowercase
*
* Return: Always 0 (Success)
*/
void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
	_puntchar(alpha);
	alpha++;
	}
	_putchar('\n');
}

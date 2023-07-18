#include "main.h"
/**
* print_alphabet - Prints the alphabet in lowercase
*
* Return: Always 0 (Success)
*/
void print_alphabet_x10(void)
{
	int i, j;
	char letter;

	for (i = 0; i < 10; i++)
	{
	letter = 'a';
	while (letter <= 'z')
	{
	_putchar(letter);
	letter++;
	}
	}
	_putchar('\n');
}

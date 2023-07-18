#include "main.h"
/**
* main - Entry point
*
* print_alphabet_x10 - Prints the alphabet 10 times
*
* Return: Always 0 (Success)
*/
/* betty style doc for function main goes there*/
void print_alphabet_x10(void)
{
	int i;
	char letter;

	for (i = 0; i < 10; i++)
	{
	letter = 'a';
	while (letter <= 'z')
	{
	_putchar(letter);
	letter++;
	}
	_putchar('\n');
	}
}

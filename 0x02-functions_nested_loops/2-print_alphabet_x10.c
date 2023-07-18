#include "main.h"
/**
* main - Entry point
*
* Return: Always 0 (Success)
*
* print_alphabet_x10 - prints alphabets 10 times
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

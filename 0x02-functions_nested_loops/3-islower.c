#include "main.h"
#include <ctype.h>
/**
* _islower - Checks whether a char is in lowercare or not
*
* @c: the char in ASCII code
*
* Return: 1 for lowercase char. 0 for the rest.
*/
/* betty style doc for function main goes there*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

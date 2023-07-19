#include "main.h"
#include <ctype.h>
/**
*_isalpha - Checks for alphabet characters.
*
* @c: the char in ASCII code
*
* Return: 1 for lowercase char. 0 for the rest.
*/
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	||
	(c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

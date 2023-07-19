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
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
	return (1);
	}
	else
	{
	return (0);
	}
}

#include "main.h"
/**
* void _islower using 'c' - Checks whether a char is in lowercare or not
*
* Return: Always 0 (Success)
*/
/* betty style doc for function main goes there*/
void _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

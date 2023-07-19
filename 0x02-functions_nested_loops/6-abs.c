#include "main.h"
#include <ctype>
/*
 * _abs - Calculates the abolute value of an int.
 *
 * @i: input no. as an int.
 *
 * Return absolute value
 */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}

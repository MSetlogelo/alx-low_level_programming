#include "main.h"
#include <ctype.h>
/**
 *_abs - Calculates the abolute value of an int.
 *
 * @i: input no. as an int.
 *
 * Return: i or 1 * -1 (absolute value)
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

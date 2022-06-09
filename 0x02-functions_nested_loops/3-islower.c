#include "main.h"
#include <ctype.h>
/**
 * _islower - checks whether is lower
 *
 * @c: is the declared integer
 * Return: returns 0 for uppercase and returns 1 for lowercase
 */

int _islower(int c)
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

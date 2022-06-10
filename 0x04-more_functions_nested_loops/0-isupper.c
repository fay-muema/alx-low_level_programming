#include "main.h"
/**
 * _isupper - prints if it is upper or if it is lower
 * @c: input character
 * Return: returns o
 */

int _isupper(int c)
{
	if (c >= 'A' || c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

#include "main.h"

/**
 * _isalpha: this is where the output of the outcome goes if it meets
 *
 * @c: this is a character initialized as integer
 *
 * Return: returns to 0 if is a letter and else otherwise
 */

int _isalpha(int c)
{

	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

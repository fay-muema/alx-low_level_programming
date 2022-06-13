#include "main.h"

/**
 * print_rev - his is where the string is printed
 * @s: the character initialized
 * Return - returns 0
 */

void print_rev(char *s)
{
	int len;

	while (s[len])
		len++;
	while (len--)
		_putchar(s[len]);
	_putchar('\n');
}

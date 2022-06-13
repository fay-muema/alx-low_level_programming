#include "main.h"

/**
 * _strlen - the length of the string is displayed
 * @s: - this is charactrer initialized
 * Return: returns i0
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;
	return (len);
}

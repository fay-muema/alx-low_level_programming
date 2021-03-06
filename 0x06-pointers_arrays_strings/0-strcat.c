#include "main.h"

/**
 * _strcat - concatenates the two strings
 * @dest: the detination.
 * @src: the source
 * Return: return the pointer to destination
 */

char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (*(dest + a) != '\0')
	{
		a++;
	}

	while (b >= 0)
	{
		*(dest + a) = *(src + b);
		if (*(src + b) == '\0')
			break;
		a++;
		b++;
	}
	return (dest);
}

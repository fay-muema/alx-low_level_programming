#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: is the destination of the file
 * @src: the source.
 * @n: the number of bytes from src.
 * Return: points to the destination
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && src[a] != '\0'; a++)
		dest[a] = src[a];
	for ( ; a < n; a++)
		dest[a] = '\0';
	return (dest);
}

#include "main.h"
#include <stdio.h>
/**
 * _puts - this is where the string is printed
 * @str: defined for char
 * Return: returns 0
 */

void _puts(char *str)
{
	while (*str)
		putchar(*str++);
	putchar('\n');


}

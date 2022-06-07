#include <stdio.h>

#include <ctype.h>

/**
 * main - this is where the code begins
 *
 * Description - this is where the code goes
 *
 * Return: returns 0
 */

int main(void)
{
	int ch;
	int up;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);

	}

	for (up = 'A'; up <= 'Z'; up++)
	{
		putchar(up);

	}

	putchar('\n');

	return (0);



}

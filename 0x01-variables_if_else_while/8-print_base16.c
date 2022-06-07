#include <stdio.h>

/**
 * main - the code starts here
 *
 * Description - the main code goes here
 *
 * Return: returns 0
 */

int main(void)
{
	int b;
	int c;

	for (b = '0'; b <= '9'; b++)
	{
		putchar(b);
	}

	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}

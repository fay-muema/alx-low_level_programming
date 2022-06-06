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
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}

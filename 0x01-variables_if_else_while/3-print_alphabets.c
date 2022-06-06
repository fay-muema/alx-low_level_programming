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

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		int to_upper = toupper(ch);

		putchar(ch);

		putchar(to_upper);

		putchar('\n');

	}

	return (0);



}

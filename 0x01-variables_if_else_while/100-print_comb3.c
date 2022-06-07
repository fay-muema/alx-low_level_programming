#include <stdio.h>

/**
 * main - this is where the code starts
 *
 * Description - where the possible two digits
 *
 * Return: returns 0
 */

int main(void)
{
	int a;
	int b;
	for (a = '0'; a <= '9'; a++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			if (!(a > b || a == b)
					{

						putchar(a);
						putchar(b);
						if (a == '8' && b == '9')
						{

											putchar('\n');

															}

																			else

																							{

																												putchar(',');

																																	putchar(' ');
																																	}
																																	}
		}
	}
}

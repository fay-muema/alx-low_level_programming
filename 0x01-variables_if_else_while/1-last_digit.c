#include <stdlib.h>

#include <time.h>

#include <stdio.h>

/* more headers goes there */

/**
 * main - the code starts here
 *
 * Description - the main code goes here
 *
 * Return: returns 0
 */

/* betty style doc for function main goes there */

int main(void)

{

		int n;
		char str[] = "Last digit of";
		int lastDigit;



			srand(time(0));

				n = rand() - RAND_MAX / 2;
				lastDigit = n % 10;

					/* your code goes there */
				printf("Last digit of %d is ", n);
				if (lastDigit > 5)
				{
					printf("%d and is greater than 5\n", lastDigit);
				}
				else if (lastDigit == 0)
				{
					printf("%d and is 0\n", lastDigit);
				}
				else
				{
					printf("%d and is less than 6 and not 0\n", lastDigit);
				}

					return (0);

}

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



			srand(time(0));

				n = rand() - RAND_MAX / 2;

					/* your code goes there */
				printf("Last digit of %d is %d ", n, n);
				if (n > 5)
				{
					printf("and is greater than 5\n");
				}
				else if (n == 0)
				{
					printf("is zero\n");
				}
				else
				{
					printf("and is less than 6 and not 0\n");
				}

					return (0);

}

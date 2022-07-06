#include "3-calc.h"

/**
 * op_add - adds a two numbers
 *@a: first number
 *@b: second number
 *Return: adds two numbers
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substracts two numbers
 * @a: first numver
 * @b: second number.
 * Return: returns the difference between two numbers
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies numbers
 * @a: first numebr
 * @b: second number
 * Return: returns the multiplication
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division between two numbers
 * @a: first number
 * @b: second number
 * Return: divides the numbers
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - remainder
 * @a: first numbers
 * @b: second number
 * Return: returns remaining number
 */


int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

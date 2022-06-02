#include <stdio.h>
/**
 * main - where the codes starts
 *
 * Description - prints the size of various types of computer
 *
 * Return: returns 0
 */
int main(void)
{
	int a;
	long long int b;
	long int c;
	float d;
	char e;

      	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(e));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(d));
        return (0);
}

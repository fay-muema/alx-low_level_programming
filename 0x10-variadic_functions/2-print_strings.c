#include "variadic_functions.h"

/**
 *print_strings - prints strings of a function
 *@separator: the strings to be printed between the lines
 *@n: number of strings passed
 *Return: returns 0.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;

	unsigned int i;
	char *str;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char*);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (i < n - 1)
			if (separator)
				printf("%s", separator);
	}
	printf("\n");
	va_end(ap);

}

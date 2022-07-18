#include "main.h"

/**
 * cap_string - makes all words of a string capital
 * @k: input string
 * Return: returns the pointer
 */


char *cap_string(char *)
{
	int cou;
	int a;
	int sep_words[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(k + cou) >= 97 && *(k + cou) <= 122)
		*(k + cou) = *(k + cou) - 32;
	cou++;
	while (*(k + cou) != '\0')
	{
		for (a = 0; a < 13; a++)
		{
			if (*(k + cou) == sep_words[a])
			{
				if ((*(k + (cou + 1)) >= 97) && (*(k + (cou + 1)) <= 122))
					*(k + (cou + 1)) = *(k + (cou + 1)) - 32;
				break;
			}
		}
		cou++;
	}
	return (k);
}


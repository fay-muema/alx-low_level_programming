#include "lists.h"

/**
 *print_listint -  prints all the elements of listint
 *
 *@h: head of lists
 *Return: returns number of lists
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		printf("%d", h->n);
			h = h->next;
			nodes++;
	}
	return (nodes);

}

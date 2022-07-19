#include "lists.h"

/**
* free_list - frees a list
*
* @head: head of the linked list.
*
* Return: no return.
*/
void free_list(list_t *head)
{
	list_t *currentNode;

	while ((currentNode = head) != NULL)
	{
		head = head->next;
		free(currentNode->str);
		free(currentNode);
	}
}


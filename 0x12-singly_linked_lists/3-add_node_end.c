#include "lists.h"

/**
* add_node_end - adds a new node at the end
*
* of a list_t list.
*
* @head: head of the linked list.
*
* @str: string to store in the list.
*
* Return: address of the head.
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end, *temp;
	size_t characters;

	end = malloc(sizeof(list_t));

	if (end == NULL)
		return (NULL);

	end->str = strdup(str);

	for (characters = 0; str[characters]; characters++)
		;

	end->len = characters;
	end->next = NULL;
	temp = *head;


	if (temp == NULL)
	{
		*head = end;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = end;
	}
	return (*head);
}

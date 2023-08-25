#include "lists.h"
#include <string.h>
/**
 * add_node_end - function that adds node to the end of
 * the linked list
 * @head: head of the list
 * @str: str of the list
 *
 * Return: the list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node_end = malloc(sizeof(size_t));
	list_t *iterative_node = *head;

	if (!head || !new_node_end)
		return (NULL);

	if (str)
	{
		new_node_end->str = strdup(str);
		if (!new_node_end->str)
		{
			free(new_node_end);
			return (NULL);
		}
		new_node_end->len = strlen(new_node_end->str);
	}

	if (iterative_node)
	{
		while (iterative_node->next != NULL)
			iterative_node = iterative_node->next;
		iterative_node->next = new_node_end;
	}
	else
		*head = new_node_end;

	return (new_node_end);
}



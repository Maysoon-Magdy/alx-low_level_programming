#include "lists.h"
#include <string.h>
/**
 * add_node - function that adds new node to the list
 * @head: the head node of the list
 * @str: str of linked list node
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *updated_head = malloc(sizeof(list_t));

	if (!head || !updated_head || !str)
		return (NULL);

	if (str)
	{
		updated_head->str = strdup(str);
	/*	if (!updated_head->str)
		{
			free(updated_head);
			return (NULL);
		}
	*/	updated_head->len = strlen(updated_head->str);
	}

	updated_head->next = *head;
	*head = updated_head;
	return (updated_head);
}


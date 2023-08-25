#include "lists.h"
/**
 * free_list - a function that frees a list
 * @head: points to the head of a list
 */

void free_list(list_t *head)
{
	list_t *head_node;
	list_t *next_node;

	if(!head)
		return;

	head_node = head;
	while (head_node)
	{
		next_node = head_node->next;
		free(head_node->str);
		free(head_node);
		head_node = next_node;
	}
}

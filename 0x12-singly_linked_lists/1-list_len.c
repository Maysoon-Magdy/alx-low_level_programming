
#include "lists.h"
/**
 * list_len - function that returns number of elem. in list
 * @h: the linked list
 *
 * Return: length of the list
 */

size_t list_len(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		h = h->next;
		x++;
	}
	return (x);
}

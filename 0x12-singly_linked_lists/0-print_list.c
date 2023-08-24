#include "lists.h"
#include <stdio.h>
/**
 * _strlen - function return the length of string
 * @s: the string
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int x;

	x = 0;
	if (!s)
		return (0);
	while (*s++)
		x++;
	return (x);
}

/**
 * print_list - prints a linked list
 * @h: point to the head node
 *
 * Return: size of the list
 */
size_t print_list(const list_t *h)
{
	size_t l;

	l = 0;
	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		l++;
	}
	return (l);

}


#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to list_t list to be printed
 *
 * Return: the number of nodes
 *
 */
size_t print_list(const list_t *h)
{
	size_t t = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%lu] %s\n",(unsigned long) h->len, h->str);
		h = h->next;
		t++;
	}

	return (t);
}

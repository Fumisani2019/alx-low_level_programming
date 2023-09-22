#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: double pointer to the list_t list
 * @str: needs to be duplicated
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *start;
	unsigned int len = 0;

	while (str[len])
		len++;

	start = malloc(sizeof(list_t));
	if (!start)
		return (NULL);

	start->str = strdup(str);
	start->len = len;
	start->next = (*head);
	(*head) = start;

	return (*head);
}

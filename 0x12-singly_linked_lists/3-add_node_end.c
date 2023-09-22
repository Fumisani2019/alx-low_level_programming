#include <stdlib.h>
#include <string.h>
#include "lists.h"

 /**
 * *add_node_end - Adds a new node with a string at the end of a list_t list.
 * @head: Pointer to the pointer to the head of the list. If the list is empty
 * @str: String to be stored in the new node.
 *
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *start;
	list_t *end = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	start = malloc(sizeof(list_t));
	if (!start)
		return (NULL);

	start->str = strdup(str);
	start->len = len;
	start->next = NULL;

	if (*head == NULL)
	{
		*head = start;
		return (start);
	}

	while (end->next)
		end = end->next;

	end->next = start;

	return (start);
}

#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds a new
 * node at the end of a list_t list
 *
 * @head: A pointer the head of the list_t list.
 * @str: The string to be added to the list_t list.
 * Return: The address of the new element
 * or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *cp;
	int lth;
	list_t *nw, *last;

	nw = malloc(sizeof(list_t));
	if (nw == NULL)
		return (NULL);

	cp = strdup(str);
	if (str == NULL)
	{
		free(nw);
		return (NULL);
	}

	for (lth = 0; str[lth];)
		lth++;

	nw->str = cp;
	nw->len = lth;
	nw->next = NULL;

	if (*head == NULL)
		*head = nw;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = nw;
	}

	return (*head);
}

#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node
 * at the beginning of a list_t list.
 * @head: A pointer to the head of the list_t list
 * @str: The string to be added to the list_t list
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	char *cp;
	int len;
	list_t *ew;

	ew = malloc(sizeof(list_t));
	if (ew == NULL)
		return (NULL);

	cp = strdup(str);
	if (cp == NULL)
	{
		free(ew);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	ew->str = cp;
	ew->len = len;
	ew->next = *head;

	*head = ew;

	return (ew);
}

#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: A pointer to the list_t list
 */
void free_list(list_t *head)
{
	list_t *tp;

	while (head)
	{
		tp = head->next;
		free(head->str);
		free(head);
		head = tp;
	}
}

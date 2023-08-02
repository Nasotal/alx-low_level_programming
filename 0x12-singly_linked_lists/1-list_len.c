#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * list_len - a function that returns the
 * number of elements in a linked list_t list.
 * @h: The linked list_t list.
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t lmt = 0;

	while (h)
	{
		lmt++;
		h = h->next;
	}

	return (lmt);
}

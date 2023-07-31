#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node to a listint_t
 * list at a given position.
 * @head: A pointer to the address of the
 * head of the listint_t list.
 * @idx: The index of the listint_t list where the new
 * node should be added - indices start at 0.
 * @n: The integer for the new node to contain.
 * Return: If the function fails - NULL.
 * Otherwise - the address of the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ew, *copy = *head;
	unsigned int node;

	ew = malloc(sizeof(listint_t));
	if (ew == NULL)
		return (NULL);

	ew->n = n;

	if (idx == 0)
	{
		ew->next = copy;
		*head = ew;
		return (ew);
	}

	for (node = 0; node < (idx - 1); node++)
	{
		if (copy == NULL || copy->next == NULL)
			return (NULL);

		copy = copy->next;
	}

	ew->next = copy->next;
	copy->next = ew;

	return (ew);
}

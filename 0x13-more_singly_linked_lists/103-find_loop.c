#include "lists.h"

/**
* find_listint_loop - Finds the loop contained in
 * a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 * Return: If there is no loop - NULL.
 * Otherwise - the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *doog, *hen;

	if (head == NULL || head->next == NULL)
		return (NULL);

	doog = head->next;
	hen = (head->next)->next;

	while (hen)
	{
		if (doog == hen)
		{
			doog = hen;

			while (doog != hen)
			{
				doog = doog->next;
				hen = hen->next;
			}

			return (doog);
		}

		doog = doog->next;
		hen = (hen->next)->next;
	}

	return (NULL);
}

#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * find_listint_loop - Finds the loop in a linked list.
 * @head: pointer to the start of the list
 *
 * Return: Address of the node where the loop starts,
 *         or NULL .
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise, *hare;

	if (head == NULL)
		return (NULL);

	tortoise = head;
	hare = head;

	while (hare && hare->next)
	{
		tortoise = tortoise->next;
		hare = hare->next->next;

		if (tortoise == hare)
		{
			tortoise = head;
			while (tortoise != hare)
			{
				tortoise = tortoise->next;
				hare = hare->next;
			}
			return (hare);
		}
	}

	return (NULL);
}

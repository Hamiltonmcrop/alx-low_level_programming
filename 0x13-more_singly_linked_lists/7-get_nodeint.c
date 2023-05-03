#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth nod
 * of a listint_t linked list
 * @head:input
 * @index:input
 * Return:nth node or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node = 0;

	for ( ; node < index; node++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}

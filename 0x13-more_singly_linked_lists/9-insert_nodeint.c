#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at
 * a specific given  position.
 * @head:input
 * @idx:input
 * @n:input
 * Return:Address of the new node or NULL.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int node = 0;
	listint_t *h, *c_node = *head;

	h = malloc(sizeof(listint_t));
	if (h == NULL)
		return (NULL);
	h->n = n;
	if (idx == 0)
	{
		h->next = *head;
		*head = h;
		return (h);
	}
	for ( ; node < idx - 1; node++)
	{
		if (c_node == NULL || c_node->next == NULL)
			return (NULL);
		c_node = c_node->next;
	}
	h->next = c_node->next;
	c_node->next = h;
	return (h);
}

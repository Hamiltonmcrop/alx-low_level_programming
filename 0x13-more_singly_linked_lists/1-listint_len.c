#include "lists.h"

/**
 * listint_len - listint_len return number of elements
 * in a linked listint_t list
 * @h:input
 * Return:number of elements
 */

size_t listint_len(const listint_t *h)
{
	int num_elem = 0;

	while (h != NULL)
	{
		num_elem++;
		h = h->next;
	}
	return (num_elem);
}

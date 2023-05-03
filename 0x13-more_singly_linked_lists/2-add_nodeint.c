#include "lists.h"

/**
 * add_nodeint - Adds node at the beginning
 * of a listint_t list
 * @head:input
 * @n:input
 * Return:address of the new element, or 0
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *h;

	h = malloc(sizeof(listint_t));
	if (h == NULL)
		return (NULL);
	h->n = n;
	h->next = *head;
	*head = h;
	return (h);
}

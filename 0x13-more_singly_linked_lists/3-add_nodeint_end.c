#include "lists.h"

/**
 * add_nodeint_end - Add new node at the end of a **listint_t list
 * @head:input
 * @n:input
 * Return: Address of the new element, or NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *h, *tmp;

h = malloc(sizeof(listint_t));
if (h == NULL)
	return (NULL);
h->n = n;
h->next = NULL;
if (*head == NULL)
	*head = h;
else
{
	tmp = *head;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = h;
}
return (*head);
}

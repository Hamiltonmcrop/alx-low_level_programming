#include "lists.h"

/**
 * sum_listint - Return sum of all (n) of  a listint_t 
 *linked list
 * @head:input
 * Return:sum of all (n) or 0
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

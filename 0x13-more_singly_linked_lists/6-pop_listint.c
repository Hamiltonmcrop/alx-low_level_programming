#include "lists.h"

/**
 * pop_listint - Delete the head node of a listint_t
 * linked list,and returns the head node’s data (n).
 * @head:input
 * Return: head node or 0
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp = *head;
	int data_node;

	if (*head == NULL)
		return (0);
	*head = (*head)->next;
	data_node = tmp->n;
	free(tmp);
	return (data_node);
}


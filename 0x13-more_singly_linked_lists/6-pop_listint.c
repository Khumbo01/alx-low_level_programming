#include "lists.h"

/**
 * pop_listint - terminates a head node of a linked list
 * @head: pointer to the first element in the linked list
 *
 * Return: data inside the elements which has bren deleted,
 * or 0 when empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}

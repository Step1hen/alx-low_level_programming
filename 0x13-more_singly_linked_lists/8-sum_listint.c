#include "lists.h"

/**
 * sum_listint - sums all the data (n) of a listint_t linked list.
 * @head: A pointer to the head of the listint_t linked list.
 *
 * Return: If the list is empty - 0, otherwise - the sum of all the data.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}

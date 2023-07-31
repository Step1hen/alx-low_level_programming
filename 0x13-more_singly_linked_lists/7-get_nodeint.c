#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to the head of the listint_t list
 * @index: The index of the node required - indices start at 0.
 *
 * Return: the address of the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *cursor = NULL;
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i <= index)
		{
			if (i == index)
			{
				cursor = head;
				break;
			}
			head = head->next;
			i++;
		}
		else
			return (NULL);
	}
	return (cursor);
}

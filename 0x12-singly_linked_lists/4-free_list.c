#include "lists.h"

/**
 * free_list - free single list
 *
 * @head: pointer to the first node
 *
 * Return: nothing
*/
void free_list(list_t *head)
{
	list_t *current;

	/**
	 * while current head is not null
	 * set head as the next node and
	 * free the current node string then
	 * free current node.
	*/
	while ((current = head) != NULL)
	{
		head = head->next;
		free(current->str);
		free(current);
	}
}

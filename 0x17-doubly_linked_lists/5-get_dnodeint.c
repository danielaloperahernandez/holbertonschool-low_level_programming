#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns the nth node
 *							of a dlistint_t linked list.
 * @head: pointer to a double linked list
 * @index: index of the node, starting from 0
 * Return: the nth node of a dlistint_t linked list or NULL
 *			if the node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head && count != index)
	{
		head = head->next;
		count++;
	}
	if (!head)
		return (NULL);
	return (head);
}

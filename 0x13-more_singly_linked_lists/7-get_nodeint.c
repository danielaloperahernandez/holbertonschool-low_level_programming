#include "lists.h"
/**
*get_nodeint_at_index - function that returns the nth node of a listint_t list
*@head: head of a listint_t linked list
*@index: nth node of a listint_t linked list
*Return: pointer to list node or NULL if index is not present
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; head; i++)
	{
		if (i == index)
			return (head);
		head = head->next;
	}
	return (NULL);
}

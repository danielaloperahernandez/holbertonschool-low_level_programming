#include "lists.h"
/**
 * delete_dnodeint_at_index - function that deletes a new node
 *								at a given position
 * @head: double pointer to a double linked list
 * @index: index of the node that should be deleted.
 *			Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *aux = *head;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		if (aux->next)
			aux->next->prev = NULL;
		*head = aux->next;
		free(aux);
		return (1);
	}
	while (aux->next && count != index)
	{
		if (count == index)
			break;
		aux = aux->next;
		count++;
	}
	if (index != count)
		return (-1);
	if (aux->next == NULL)
		aux->prev->next = NULL;
	else
	{
		aux->prev->next = aux->next;
		aux->next->prev = aux->prev;
	}
	free(aux);
	return (1);
}

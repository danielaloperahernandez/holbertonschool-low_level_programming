#include "lists.h"
/**
*delete_nodeint_at_index -  deletes the node at index of a listint_t list
*@head: head of a listint_t linked list
*@index: index for the element to delete
*Return: 1 if it succeeded, -1 if it failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *delete;
	listint_t *aux = *head;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(aux);
		return (1);
	}
	for (i = 0; i < index - 1; ++i)
	{
		if (aux->next == NULL)
			return (-1);
		aux = aux->next;
	}
	delete = aux->next;
	aux->next = delete->next;
	free(delete);
	return (1);
}


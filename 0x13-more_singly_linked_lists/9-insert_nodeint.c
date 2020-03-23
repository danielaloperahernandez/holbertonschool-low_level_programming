#include "lists.h"
/**
*insert_nodeint_at_index - function that inserts a new node at a given position
*@head: head of a listint_t list
*@idx: index
*@n: value for a new node
*Return: the address of the new node, or NULL if it failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *aux = *head;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	for (i = 0; aux; ++i)
	{
		if (i == idx - 1)
		{
			new->next = aux->next;
			aux->next = new;
			return (new);
		}
		aux = aux->next;
	}
	free(new);
	return (NULL);
}

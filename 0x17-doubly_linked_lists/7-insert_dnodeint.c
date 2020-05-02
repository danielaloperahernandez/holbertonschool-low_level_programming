#include "lists.h"
/**
 * insert_dnodeint_at_index - function that inserts a new node
 *								at a given position
 * @h: double pointer to a double linked list
 * @idx:  index of the list where the new node should be added.
 *			Index starts at 0
 * @n: value for the new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *aux = *h;
	unsigned int count = 0;

	if (h == NULL || (idx != 0 && *h == NULL))
		return (NULL);
	if (idx == 0)
	{
		new = malloc(sizeof(dlistint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->prev = NULL;
		if (*h == NULL)
			new->next = NULL;
		else
		{
			new->next = *h;
			(*h)->prev = new;
		}
		*h = new;
		return (new);
	}
	while (aux->next && count != (idx - 1))
	{
		aux = aux->next;
		count++;
	}
	if (idx - 1 != count)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (aux->next)
		aux->next->prev = new;
	new->prev = aux;
	new->next = aux->next;
	aux->next = new;
	return (new);
}

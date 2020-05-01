#include "lists.h"
/**
 * add_dnodeint_end - function that adds a new node at the end of a
 *                double linked list
 * @head: double pointer to a double linked list
 * @n: value of the new node
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *aux = *head;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (*head);
	}
	while (aux->next)
		aux = aux->next;
	aux->next = new;
	new->prev = aux;
	new->next = NULL;
	return (new);
}

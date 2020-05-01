#include "lists.h"
/**
 * add_dnodeint - function that adds a new node at the beginning of a
 *                double linked list
 * @head: double pointer to a double linked list
 * @n: value of the new node
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	if (*head == NULL)
	{
		new->next = NULL;
		*head = new;
		return (*head);
	}
	new->next = *head;
	(*head)->prev = new;
	*head = new;
	return (*head);
}

#include "lists.h"
/**
*add_nodeint_end - adds a new node at the end of a listint_t list.
*@head: head of the listint_t list.
*@n: new element in the listint_t list.
*Return: the address of the new element, or NULL if it failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *prev = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (prev == NULL)
	{
		*head = new;
		return (new);
	}
	while (prev->next)
		prev = prev->next;
	prev->next = new;
	return (new);
}

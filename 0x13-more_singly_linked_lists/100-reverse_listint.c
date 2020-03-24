#include "lists.h"
/**
*reverse_listint - reverses a listint_t linked list
*@head: head of a linked list
*Return: pointer to the first node of the reversed list
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current, *prev = NULL;

	while (*head != NULL)
	{
		current = *head;
		*head = current->next;
		current->next = prev;
		prev = current;
	}
	*head = prev;
	return (*head);
}

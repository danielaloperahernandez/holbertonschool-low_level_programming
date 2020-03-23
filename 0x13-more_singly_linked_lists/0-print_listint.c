#include <stdio.h>
#include "lists.h"
/**
*print_listint - prints all the elements of a listint_t list
*@h: element of listint_t
*Return: number of elemento of the listint_t list
*/
size_t print_listint(const listint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; ++i)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}

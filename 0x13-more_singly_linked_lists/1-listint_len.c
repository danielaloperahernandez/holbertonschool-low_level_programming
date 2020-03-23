#include <stdio.h>
#include "lists.h"
/**
*listint_len - prints all the elements of a listint_t list
*@h: element of listint_t
*Return: number of elements of the listint_t list
*/
size_t listint_len(const listint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; ++i)
	{
		h = h->next;
	}
	return (i);
}

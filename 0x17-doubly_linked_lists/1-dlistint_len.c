#include "lists.h"
/**
 * dlistint_len - print doubly linked list and count its elements
 * @h: head of the doubly linked list
 * Return: Count of the elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count_p = 0;

	while (h)
	{
		h = h->next;
		count_p++;
	}
return (count_p);
}

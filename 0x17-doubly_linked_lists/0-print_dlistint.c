#include "lists.h"
/**
 * print_dlistint - print doubly linked list and count its elements
 * @h: head of the doubly linked list
 * Return: Count of the elements
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count_p = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count_p++;
	}
return (count_p);
}

#include "lists.h"
/**
*list_len - print string and length of string for each element of 'h'
*@h: pointer to first element of list
*Return: length of list
*/
size_t list_len(const list_t *h)
{
	size_t size = 0;

	while (h)
	{
		h = h->next;
		++size;
	}
	return (size);
}

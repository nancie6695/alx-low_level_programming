#include <stdio.h>
#include "lists.h"

/**
 * print_listint- print all elements in listint_t.
 * @h: pointer to listint_t to print elements.
 *
 * Return: number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}

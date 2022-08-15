#include "lists.h"
#include <stdio.h>
/**
 * print_listint - Prints all the elements of a list.
 * @h: Pointer to a list
 * Return: integer
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *temp;
	unsigned int i = 0;

	temp = h;
	while (temp)
	{
		printf("%d\n", temp->n);
		i++;
		temp = temp->next;
	}
	return (i);
}

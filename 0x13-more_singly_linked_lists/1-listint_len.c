#include "lists.h"

/**
 * listint_len - Calculates the number of elements in a list
 * @h: Pointer
 * Return: Integer
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *temp;
	unsigned int i = 0;

	temp = h;
	while (temp)
	{
		i++;
		temp = temp->next;
	}
	return (i);
}

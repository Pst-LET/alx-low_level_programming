#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: The number of bytes to be allocated.
 *
 * Return: Pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *allocmem = malloc(b);

	if (allocmem == NULL)
		exit(98);

	return (allocmem);
}

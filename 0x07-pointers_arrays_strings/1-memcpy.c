#include "main.h"
/**
 * _memcpy - copies memory area.
 * @dest: destionation pointer
 * @src: source pointer
 * @n: number of bytes from memory area
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int k;

	for(k = 0; k < n; k++)
		dest[k] = src[k];
	return (dest);
}

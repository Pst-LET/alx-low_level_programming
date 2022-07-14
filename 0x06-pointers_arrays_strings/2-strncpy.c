#include "main.h"
#include <string.h>
/**
 * _strncpy - copies a string
 * @dest: pointer to destination
 * @src: pointer to  source
 * @n: number of bytes
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}

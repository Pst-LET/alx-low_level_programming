#include "main.h"
#include <string.h>
/**
 * _strncat - concatenates two strings
 * @dest: destination pointer
 * @src: source pointer
 * @n: numbers of bytes from src
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}

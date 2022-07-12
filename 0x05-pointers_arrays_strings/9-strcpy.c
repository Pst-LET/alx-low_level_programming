#include "main.h"
#include <string.h>
/**
 * *_strcpy - copies a string including the null byte
 * @dest: pointer to buffer
 * @src: pointer
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{

	strcpy(dest, src);
	return (dest);
}

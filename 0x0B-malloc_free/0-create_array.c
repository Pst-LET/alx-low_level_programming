#include "main.h"

/**
* create_array -  creates an array of chars
* @size: size of the array to be created
* @c: character
* Return: pointer to the array
*/
char *create_array(unsigned int size, char c)
{
	unsigned int k;
	char *i;

	if (size == 0)
		return (NULL);
	i = (char *)malloc(size * sizeof(char));
	if (i == NULL)
		return (NULL);
	for (k = 0; k < size; k++)
		i[k] = c;

	return (i);
}

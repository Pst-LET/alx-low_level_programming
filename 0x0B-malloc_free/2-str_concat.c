#include "main.h"

/**
* str_concat - concatenates two strings
* @s1: first string
* @s2: second string
* Return: result
*/
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, l = 0, k = 0;
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[j])
		j++;

	l = i + j;
	result = (char *)malloc(l * sizeof(char) + 1);
	if (result == NULL)
		return (NULL);
	j = 0;
	while (k < l)
	{
		if (k < i)
			result[k] = s1[k];
		if (k >= i)
		{
			result[k] = s2[j];
			j++;
		}
		k++;
	}
	result[k] = '\0';
	return (result);
}

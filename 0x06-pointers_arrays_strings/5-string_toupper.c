#include "main.h"
/**
 * string_toupper - changes all lowercase letters to uppercase
 * @x: pointer to char
 * Return: result
 */
char *string_toupper(char *x)
{
	int i;

	for (i = 0; x[i] != '\0'; i++)
	{
		if (x[i] >= 97 && x[i] <= 122)
		{
			x[i] -= 32;
		}
	}
	return (x);
}

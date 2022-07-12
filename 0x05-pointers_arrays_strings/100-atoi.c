#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _atoi - converts a string to an integer
 * @s: pointer
 * Return: 0 for no numbers in the string
 */
int _atoi(char *s)
{
	int tmp;

	tmp = atoi(s);
	if (*s == '\0')
	return (0);
	else
		return (tmp);
}

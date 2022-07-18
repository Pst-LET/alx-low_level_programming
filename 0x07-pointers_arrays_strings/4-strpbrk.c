#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - searches for a string 
 * @s: pointer
 * @accept: pointer
 * Return: pointer to the bytes in accepte or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int k = 0;
	int l;

	while (s[k])
	{
		l = 0;
		while (accept[l])
		{
			if (s[k] == accept[l])
			{
				s += k;
				return (s);
			}
			l++;
		}
		k++;
	}
	return ('\0');
}

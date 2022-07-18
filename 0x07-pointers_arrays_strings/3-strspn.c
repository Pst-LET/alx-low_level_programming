#include "main.h"
#include <stdio.h>
/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer
 * @accept: pointer
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int k = 0;
	int b;
	int l = 0;

	while (accept[k])
	{
		b = 0;
		while (s[b] != 32)
		{
			if (accept[k] == s[b])
			{
				l++;
			}
			b++;
		}
		k++;
	}
	return (l);
}

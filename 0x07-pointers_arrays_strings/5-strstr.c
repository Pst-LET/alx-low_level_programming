#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: pointer
 * @needle: pointer
 * Return: Pointer to beginning of the located string or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	int k = 0;
	int l = 0;

	while (haystack[k])
	{
		while (needle[l])
		{
			if (haystack[k + l] != needle[l])
			{
				break;
			}
			l++;
		}
		if (needle[l] == '\0')
		{
			return (haystack + k);
		}
		k++;
	}
	return ('\0');
}

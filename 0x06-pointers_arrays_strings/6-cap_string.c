#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @x: pointer to array
 * Return: result
 */
char *cap_string(char *x)
{
	char rsd[] = {32, 9, '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}',};
	int len = 13;
	int a;

	a = 0;

	while (x[a])
	{
		int i = 0;

		while (i < len)
		{
			if ((a == 0 || x[a - 1] == rsd[i]) && (x[a] >= 97 && x[a] <= 122))
				x[a] = x[a] - 32;
			i++;
		}
		a++;
	}
	return (x);
}

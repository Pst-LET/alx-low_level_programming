#include "main.h"
/**
 * leet - encodes a string
 * @x: pointer 
 * Return: result
 */
char *leet(char *k)
{
	int a = 0;
	int i = 5;
	int b;

	char en[5] = {'A', 'E', 'O', 'T', 'L'};
	char encd[5] ={'4', '3', '0', '7', '1'};

	while (k[a])
	{
		b = 0;

		while (b < i)
		{
			if (k[a] == en[b] || k[a] - 32 == en[b])
				k[a] = encd[b];
			b++;
		}
		a++;
	}
	return (k);
}

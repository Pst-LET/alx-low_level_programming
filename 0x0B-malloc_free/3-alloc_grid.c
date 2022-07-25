#include "main.h"

/**
* alloc_grid - returns pointer to a 2 dimensional array
* @width: width of the array
* @height: height of the array
* Return: pointer to the 2d array
*/
int **alloc_grid(int width, int height)
{
	int i, j, k, l;
	int **s;

	if (width <= 0 || height <= 0)
		return (NULL);
	s = malloc(height * sizeof(int *));
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		s[i] = malloc(width * sizeof(int));
		if (s[i] == NULL)
		{
			for (j = i; j >= 0; j--)
			{
				free(s[j]);
			}
			free(s);
			return (NULL);
		}
	}

	for (k = 0; k < height; k++)
	{
		for (l = 0; l < width; l++)
			s[k][l] = 0;
	}
	return (s);
}

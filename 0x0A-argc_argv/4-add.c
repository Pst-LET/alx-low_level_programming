#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: count
 * @argv: array
 * Return: 1 error, 0 success
 */
int main(int argc, char *argv[])
{
	int result = 0;
	int num, i, j, k;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				printf("%s\n", "Error");
				return (1);
			}
		}
	}
	for (k = 1; k < argc; k++)
	{
		num = atoi(argv[k]);
		result += num;
	}
	printf("%d\n", result);
	return (0);
}

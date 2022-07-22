#include <stdio.h>
#include <stdlib.h>

/**
* main - prints the minimum number of coins to change for amount
* @argc: count
* @argv: array
* Return: 1 for error,  0 for success
*/
int main(int argc, char *argv[])
{
	int num, k, result = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}

	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("0\n");
		return (0);
	}
	for (k = 0; k < 5 && num >= 0; k++)
	{
		while (num >= coins[k])
		{
			num -= coins[k];
			result++;
		}
	}
	printf("%d\n", result);
	return (0);
}

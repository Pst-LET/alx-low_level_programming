#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints sum of two diagonals of a square matrix of ints
 * @a: pointer
 * @size: size of matrix
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int k;
	int sum1 = 0;
	int sum2 = 0;

	for (k = 0; k < size; k++)
	{
		sum1 += a[(size + 1) * k];
		sum2 += a[(size - 1) * (k + 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}

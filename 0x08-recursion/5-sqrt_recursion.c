#include "main.h"

int _sqrt(int, int);

/**
 * _sqrt_recursion - natural square root of a number
 * @n: number
 * Return: -1 is n does not have square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - computes the square of a number
 * @n: number
 * @i: number
 * Return: square
 */

int _sqrt(int n, int i)
{
	int square = i * i;

	if (square > n)
		return (-1);
	if (square == n)
		return (i);
	return (_sqrt(n, i + 1));
}

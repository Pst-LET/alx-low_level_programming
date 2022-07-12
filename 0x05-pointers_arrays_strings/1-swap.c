#include "main.h"
/**
 * swap_int - swaps toe integers
 * @a: first integer value
 * @b: second integer value
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

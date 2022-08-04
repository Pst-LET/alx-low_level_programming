#include "function_pointers.h"
#include <stdio.h>

/**
 * action - pointer to function
 * @n: case
 */

void action(int n)
{ 
	action(n);
}

/**
 * array_iteration - executes a function given as parameter
 * @array: pointer to array of functions
 * @size: size of array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	array(size);
	action(*array);
}


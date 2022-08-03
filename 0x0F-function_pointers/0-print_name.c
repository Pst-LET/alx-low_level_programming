#include "function_pointers.h"
#include <stdio.h>

/**
 * f - prints name
 * @n: name
 */
void f(char *n)
{
	printf("%s\n", n);

}
/**
 * print_name - prints a name
 * @name: name to print
 * @f: pointer to name
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}

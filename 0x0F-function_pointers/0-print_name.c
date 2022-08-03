#include "function_pointers.h"
#include <stdio.h>

/**
 * f - prints name
 * @name: name
 */
void f(char *name)
{
	printf("%s\n", name);

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

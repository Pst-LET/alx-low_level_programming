#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * @separator: pointer
 * @n: numbers to print
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
		return;
		printf("%d", i = va_arg(ap, int));
		if (i < n)
			printf("%c ", *separator);
	}
	printf("\n");
	va_end(ap);
}

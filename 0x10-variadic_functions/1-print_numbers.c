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
		printf("%d", va_arg(ap, int));
		if (i < n - 1)
			printf("%c ", *separator);
		va_end(ap);
	}
	printf("\n");
}

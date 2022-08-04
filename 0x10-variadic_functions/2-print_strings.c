#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints strings
 * @separator: pointer
 * @n: string count
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *str;

	va_start(ap, n);
	for (; i < n; i++)
	{
		if (separator == NULL)
			return;
		str = va_arg(ap, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

	if (i < n - 1)
		printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}

#include "main.h"
/**
 * more_numbers - prints 0 to 14 ten times
 *
 * Return: nothing
 */
void more_numbers(void)
{
int num;
num = 0;
for (num = 0; num <= 14; num++)
{
_putchar(num%10 + '0');
}
_putchar('\n');
}

#include "main.h"
/**
 * print_line - prints a straight line in the terminal
 *@n: number of times _ is printed
 * Return: nothing
 */
void print_line(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else if (n > 0)
{
_putchar('-');
_putchar('\n');
}
}

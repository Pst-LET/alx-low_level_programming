#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabets in lowercase
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
int i = 1;
while (i <= 10)
{
char alphabet;
alphabet = 'a';
while (alphabet <= 'z')
{
_putchar(alphabet);
++alphabet;
}
i++;
_putchar('\n');
}
}

#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabets in lowercase
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
char alphabet;
alphabet = 'a';
while (alphabet <= 'z')
{
_putchar(alphabet);
++alphabet;
}
_putchar('\n');
}

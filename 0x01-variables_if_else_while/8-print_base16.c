#include <stdio.h>
/**
 * main - print numbers in base 16
 *
 * Return: Always 0
 */
int main(void)
{
	int num;
	char ch;

	for (num = 48; num <= 57; num++)
	{
		putchar(num);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}

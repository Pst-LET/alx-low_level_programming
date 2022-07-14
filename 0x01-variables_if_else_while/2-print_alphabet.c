#include <stdio.h>
/**
 * main - prints alphabets in lowercases
 *
 * Return: Always 0
 */
int main(void)
{
	int ch;
	
	for (ch = 97; ch <= 122; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}

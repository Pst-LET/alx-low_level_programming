#include <stdio.h>
/**
 * main - combinations of two two digit numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int ch;
	int i;

	for (ch = 48; ch <= 57; ch++)
	{
		for (i = 48; i <= 57; i++)
		{
			putchar(ch);
			putchar(i);
			if (ch != 57 || i != 57)
			{
				putchar(',');
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}

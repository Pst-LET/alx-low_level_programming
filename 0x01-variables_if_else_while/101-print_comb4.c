#include <stdio.h>
/**
 * main - combinations of three digits
 *
 * Return: Always 0
 */
int main(void)
{
	int ch;
	int i;
	int j;

	for (ch = 48; ch <= 57; ch++)
	{
		for (i = 49; i <= 57; i++)
		{
			for (j = 50; j <= 57; j++)
			{
				if (i > ch && j > i)
				{
					putchar(ch);
					putchar(i);
					putchar(j);
					if (ch != 55 || i != 56 || j != 57)
					{
						putchar(',');
						putchar(32);
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}						

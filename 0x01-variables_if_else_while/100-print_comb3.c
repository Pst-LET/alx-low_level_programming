#include <stdio.h>
/**
 * main - prints possible different combinations of two digits
 *
 * Return: Always 0
 */
int main(void)
{
	int num;
	int i;

	for (num = 48; num <= 57; num++)
	{
		for (i = 49; i <= 57; i++)
		{
			if (i > num)
			{
				putchar(num);
				putchar(i);
			if (num != 56 || i != 57)
			{
				putchar(',');
				putchar (32);
			}
		}
		}
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>

/**
 * main - prints a number of arguments passed into it
 * @argc: count
 * @argv: array of argc
 * Return: 0
 */
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}

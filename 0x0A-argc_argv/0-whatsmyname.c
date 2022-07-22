#include <stdio.h>

/**
 * main - prints its name
 * @agrc: Agurments count
 * @argv: array of argc
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}

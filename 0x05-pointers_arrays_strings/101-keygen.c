#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * randompswd - generates random password
 * @n: length 
 * Return: nothing
 */
void randompswd(int n)
{
	int j = 0;
	n = 0;
	int shuffle = 0;

	srand((unsigned int)(time (NULL)));
	char num[] = "0123456789";
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";
	char ALPHA[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char sym[] = "!@#$^*?";
	char pswd[n];

	shuffle = rand() % 4;

	for (j = 0; j < n; j++)
	{
	if (shuffle == 1)
	{
		pswd[j] = num[rand() % 10];
		shuffle = rand() % 4;
		printf("%c", pswd[j]);
	}
	else if (shuffle == 2)
	{
		pswd[j] = sym[rand() % 8];
		shuffle = rand() % 4;
		printf("%c", pswd[j]);
	}
	else if (shuffle == 3)
	{
		pswd[j] = ALPHA[rand() % 26];
		shuffle = rand() % 4;
		printf("%c", pswd[j]);
	}
	else
	{
		pswd[j] = alpha[rand() % 26];
		shuffle = rand() % 4;
		printf("%c", pswd[j]);
	}
	}
}
/**
 *  * main - prints random password
 *   *
 *    * Return: 0
 *     */
int main(void)
{
int i = 15;
randompswd(i);
return (0);
}

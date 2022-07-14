#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - assigns random number to a variable
*
* Return: Always 0
*/
int main(void)
{
	int n;
	int lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdigit = n % 10;
	printf("Last digit of %d is ", n);
if (lastdigit > 5)
{
printf("%d and is greater than 5", lastdigit);
}
if (lastdigit == 0)
{
printf("%d 0 and is", lastdigit);
}
if (lastdigit < 6 && lastdigit != 0)
{
printf("%d and is less than 6 and not 0", lastdigit);
}
printf("\n");

return (0);
}

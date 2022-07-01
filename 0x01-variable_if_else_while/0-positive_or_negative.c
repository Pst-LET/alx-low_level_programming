#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - function that prints positive or negative numbers
 * 
 * Return: exit
 */
int main(void)
{
int n;

srand(time(0));
  
n = rand() - RAND_MAX / 2;

if (n > 0)
{
  printf("%d", n);
  printf (' ', "is positive\n");
}
else if (n == 0)
{
  printf("is zero %d\n", n);
}
else if (n < 0)
{
  printf("is negative %d\n", n);
}
return (0);  
}

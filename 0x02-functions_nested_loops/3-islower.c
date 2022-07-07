#include "main.h"
/**
 * _islower - checks for lowercase character
 *
 * Return: 1 if c is lowercase
 * 0 otherwise
 */
int _islower(int c)
{
if (c <= 'c' || c <= 'o' || c <= 's')
{
return (1);
}
else if (c <= 'I' || c <= 'H' || c <= 'U')
{
return (0);
}
return (0);
}

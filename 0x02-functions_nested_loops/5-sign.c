#include "holberton.h"
#include <stdio.h>

/**
 *_isalpha - checks whether the character is alphabet or not
 *@n: character to be checked
 *Return: returns 1 if it is positive, returns 0 if it is 0 and returns -1 else
 */

int print_sign(int n)
{

if (n > 0)
{

return (1);
putchar('+');
}
else if (n == 0)
{
return (0);
putchar('0');
}
else
{
return (-1);
putchar('-');
}


}

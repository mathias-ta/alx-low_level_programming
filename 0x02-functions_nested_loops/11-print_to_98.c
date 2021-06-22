#include "holberton.h"
#include <stdio.h>

/**
 *print_to_98 - print numbers from n to 98
 *@n: starting number
 *Return: nothing
 */

void print_to_98(int n)
{
while (n < 98)
{
_putchar('0' + n);
if (n == 98)
{
_putchar('\n');
}
else
{
_putchar(',');
_putchar(' ');
}
}

}

#include "holberton.h"
#include <stdio.h>

/**
 *print_diagonal - print space diagonaly
 *@n: number of space
 *Return: void
 */

void print_diagonal(int n)
{
int i = 1;
int j;

while (i <= n)
{
if (n > 0)
{
for (j = 1; j < i; j++;)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
else
{
_putchar('\n');
}
i++;
}

}

#include "holberton.h"

/**
 *_print_rev_recursion - prints reverse of a string
 *@s: string to be printed
 *Return: void
 */

void _print_rev_recursion(char *s)
{

int i = 0;
if (*s != '\0')
{

i++;
s++;
_print_rev_recursion(s);
}
else
{
while (i >= 0)
{
_putchar(*s);
i--;
}
_putchar('\n');
}
}

#include "holberton.h"

/**
 *count - counts char
 *@s: string to be counted
 *Return: void
 */

int count(char *s)
{
int c = 0;
if (*s != '\0')
{
c++;
s++;
count(s);
}
else
{
return (c);
}
}

/**
 *_print_rev_recursion - prints reverse of a string
 *@s: string to be printed
 *Return: void
 */

void _print_rev_recursion(char *s)
{
int i = count(s);
_putchar(*s);
s--;
if (i >= 0)
{
_print_rev_recursion(s);
i--;
}
else
{
_putchar('\n');
}

}

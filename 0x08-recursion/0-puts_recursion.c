#include "holberton.h"

/**
 *_puts_recursion - prints a string
 *@s: string to be printed
 *Return: void
 */

void _puts_recursion(char *s)
{

if (*s != '\0')
{
_putschar(*s);
s++;
_puts_recursion(s);
}
else{
_putchar('\n');
}
}

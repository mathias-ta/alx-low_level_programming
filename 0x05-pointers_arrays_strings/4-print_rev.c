#include "holberton.h"
#include <stdio.h>

/**
 *print_rev - print a string reverse
 *@s: string
 *Return: void
 */

void print_rev(char *s)
{
int len = 0;

while (*str != '\0')
{
len++;
str++;
}
while (len > 0)
{
putchar(*s);
len--;
}
putchar('\n');

}

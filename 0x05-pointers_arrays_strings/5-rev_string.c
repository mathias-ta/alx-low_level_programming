#include "holberton.h"
#include <stdio.h>

/**
 *rev_string - reverses a stirng
 *@s: string
 *Return: void
 */

void rev_string(char *s)
{
int len = 0;

while (*s != '\0')
{
len++;
s++;
}
s--;
while (len > 0)
{
putchar(*s);
len--;
s--;
}
putchar('\n');

}

#include "holberton.h"
#include <stdio.h>

/**
 *puts2 - print every other character of a string
 *@str: string
 *Return: void
 */

void puts2(char *str)
{

while (*str != '\0')
{
putchar(*str);
str += 2;
}
putchar('\n');

}

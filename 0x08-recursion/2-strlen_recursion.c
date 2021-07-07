#include "holberton.h"

/**
 *_strlen_recursion - counts string length
 *@s: string to be counted
 *Return: number of char
 */

int _strlen_recursion(char *s)
{
int count = 0;
count++;
if (*s == '\0')
{
return (count);
}
else
{
_strlen_recursion(s);
}
}

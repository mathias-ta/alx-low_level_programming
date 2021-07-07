#include "holberton.h"

/**
 *_strlen_recursion - counts string length
 *@s: string to be counted
 *Return: number of char
 */

int _strlen_recursion(char *s)
{
int count;

count++;
if (*s != '\0')
{
s++;
_strlen_recursion(s);
}
return (count);
}

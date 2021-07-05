#include "holberton.h"

/**
 *_strchr - find a char from a string
 *@s: string
 *@c: character to be find
 *Return: char found
 */

char *_strchr(char *s, char c)
{

int i = 0;
int j = 0;

while (1)
{
j = *s++;
if (j == c)
{
return (s - 1);
}
else if (j == 0)
{
return (NULL);
}

}
}

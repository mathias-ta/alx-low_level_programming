#include "holberton.h"

/**
 *_strchr - find a char from a string
 *@s: string
 *@c: character to be find
 *Return: char found
 */

char *_strchr(char *s, char c)
{

int i = 0, j = 0;
int counter = 0;
int k = 0;
char *ss;
while (s[i] != '0')
{
counter++;
i++;
}
i= 0;

while (i < counter)
{
if (s[i] == c)
{
break;
}
i++;
}
return (s[i]);
}

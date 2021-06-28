#include "holberton.h"
#include <stdio.h>

/**
 *_strlen - length of a string
 *@s: string
 *Return: length of the string s
 */

int _strlen(char *s)
{
int len = 0;
while (*s != '\0')
{
len++;
s++;
}
return (len);
}


/**
 *puts_half - print half of a string
 *@str: string
 *Return: void
 */

void puts_half(char *str)
{
int leng = _strlen(str);
int i = (leng / 2);
if (leng % 2 == 0)
{
while (str[i] != '\0' && i < leng)
{
putchar(str[i]);
i++;
}
}
else
{
putchar(str[leng - 1]);
}
putchar('\n');

}

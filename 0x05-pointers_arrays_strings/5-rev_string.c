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
len--;
int i;
char tmp;
while (i < len)
{
tmp = s[i];
s[i] = s[len];
s[len] = tmp;
i++, len--;
}

}

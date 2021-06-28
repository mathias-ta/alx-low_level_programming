#include "holberton.h"
#include <stdio.h>

/**
 *_strlen - length of a string
 *@s: string
 *Return: returns the length of a string
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
 *rev_string - reverses a string
 */

void rev_string(char *s)
{
int i = 0;
int j = (_strlen(s) - 1);
char tmp;

while (i < j)
{
tmp = s[i];
s[i] = s[j];
s[j] = tmp;
i++;
j--;
}
}

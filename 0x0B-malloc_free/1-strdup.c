#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_strdup - duplicates a string
 *@str: string to be duplicate
 *Return: duplicated string
 */

char *_strdup(char *str)
{
unsigned int i = 0;
char *p = malloc(sizeof(char) * sizeof(str));
if (p == NULL || str == NULL)
{
return (NULL);
}
while (*str != "\0")
{
*(p + i) = *(str + i);
i++;
str++;
p++;
}
return (p);

}

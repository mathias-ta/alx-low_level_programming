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
int  len = 0;
while (*str != '\0')
{
len++;
str++;
}
char *p = malloc(sizeof(char) * len);
if (p == NULL || str == NULL)
{
return (NULL);
}
while (*str != '\0')
{
*(p + i) = *(str + i);
i++;
str++;
p++;
}
return (p);

}

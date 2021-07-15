#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 *string_nconcat - concatinate two strings with n chars from the s2
 *@s1: string 1
 *@s2: string 2
 *@n: number of char to be concatenated
 *Return: concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
int i = 0, j = 0, len1 = 0, len2 = 0;
char *p;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
while (s1[i] != '\0')
{
len1++;
i++;
}
i = 0;
while (s2[i] != '\0')
{
len2++;
i++;
}
if (n > len2)
{
p = malloc(sizeof(char) * (len1 + len2) +1);
}
if (n <= len2)
{
p = malloc(sizeof(char) * (len1 + n) +1);
}
if (p == NULL)
{
return (NULL);
}
i = 0;
while (s1[i] != '\0')
{
p[i] = s1[i];
i++;
}
while (j < n && s2[j] != '\0')
{
p[i] = s2[j];
i++;
j++;
}
p[i] = '\0';
return (p);
}

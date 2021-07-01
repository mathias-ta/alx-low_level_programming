#include "holberton.h"
#include <stdio.h>

/**
 *_strncat - concatenates two strings with n characters from the second string
 *@dest: string 1
 *@src: string 2
 *@n: number of character to be appended
 *Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{

char *concstr;
int i = 0;
int j = 0;

while (dest[i] != '\0')
{
concstr[i] = dest[i];
i++;
}
 while ((src[j] != '\0') && (j <= (n - 1))
{
concstr[i] = src[j];
j++;
i++;
}
concstr[i] = '\0';

return (concstr);


}

#include "holberton.h"
#include <stdio.h>

/**
 *rev_string - reverses a stirng
 *@s: string
 *Return: void
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
i++, j--;
}

}

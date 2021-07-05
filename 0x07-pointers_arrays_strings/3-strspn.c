#include "holberton.h"
#define NULL 0

/**
 *_strspn - gets length of aprifix
 *@s: string
 *@accept: prifix
 *Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{

int i = 0;
int j = 0;
int count = 0;

while (s[i] != '\0')
{
while (accept[j] != '\0')
{
if (s[i] == accept[j])
{
count++;
}
j++;
}
i++;
}
return (count);
}

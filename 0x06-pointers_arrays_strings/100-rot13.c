#include "holberton.h"
#include <stdio.h>

/**
 *rot13 - encodes with arot13
 *@s: string
 *Return: encoded string
 */

char *rot13(char *s)
{

char lt[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm'};
char LT[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M'};
char rot[] = {'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x','y', 'z'};
char ROT[] = {'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'}
int j = 0;
int k = 0;

while (s[k] != '\0')
{
while (j < 5)
{
if (s[k] == lt[j])
{
s[k] = rot[j];
}
else if (s[k] == LT[j])
{
s[k] = ROT[j];
}
else if (s[k] == rot[j])
{
s[k] = lt[j];
}
else if (s[k] == ROT[j])
{
s[k] = LT[j];
}
j++;
}
j = 0;
k++;
}
return (s);

}

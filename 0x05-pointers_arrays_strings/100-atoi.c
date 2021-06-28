#include "holberton.h"
#include <stdio.h>

/**
 *_strlen - length of the string s
 *@s: the string
 *Return: the length of the string s
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
 *signs - determines the sign of the number
 *@s: the character to be determined
 *Return: the sign
 */

int signs(char *s)
{
int sign = 0;
int i = 0;
while (i <= _strlen(s))
{
if (*s == '-')
{
sign++;
}
if (*s >= '0' && *s <= '9')
{
break;
}
i++;
s++;
}
if (sign % 2 != 0)
{
return (-1);
}
else
{
return (1);
}
}

/**
 *_atoi - change character into int
 *@s: character to be changed
 *Return: an int
 */

int _atoi(char *s)
{

int prod = 1;
long int fnum = 0;
int num;
int leng = 0;
while(*s != '\0')
{
leng++;
s++;
}
s--;
while (leng > 0)
{
if (fnum > 0 && !(*s >= '0' && *s <= '9'))
{
break;
}
if (*s >= '0' && *s <= '9')
{
num = *s - '0';
fnum = fnum + (num * prod);
prod *= 10;
}
leng--;
s--;
}
fnum = signs(s) * fnum;

return (fnum);

}

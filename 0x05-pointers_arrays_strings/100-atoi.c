#include "holberton.h"
#include <stdio.h>

/**
 *signs - determines the sign of the number
 *@s: the character to be determined
 *Return: the sign
 */

long int signs(char *s)
{
long int sign = 0;
while ((*s != '0') && !(*s >= '0' && *s <= '9'))
{
if (*s == '-')
{
sign++;
}
s++;
}
if ((sign % 2) != 0)
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

long int _atoi(char *s)
{

long int prod = 1;
long int fnum = 0;
long int num;
long int leng = 0;
long int ss = signs(s);
while (*s != '\0')
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
fnum *= ss;

return (fnum);

}

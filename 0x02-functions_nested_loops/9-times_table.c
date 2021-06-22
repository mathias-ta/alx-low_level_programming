#include "holberton.h"
#include <stdio.h>

/**
 *times_table - prints every minutes
 *Return: returns the last digit
 */

void times_table(void)
{
int i = 0;
int j = 0;
int num = 0;
while (i <= 9)
{
while (j <= 9)
{

_putchar(num);
num += i;
if (j < 9)
{
_putchar(',');
_putchar(' ');
}
else
_putchar('\n');
 
j++;
}
i++;
j = 0;
}

}

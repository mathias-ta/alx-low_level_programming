#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *create_array - creates array with the specified size and assign a value
 *@size: size of the array to be created
 *@c: initializing value
 *Return - array created
 */

char *create_array(unsigned int size, char c)
{
unsigned int i = 0;
char *p = malloc(size);
while (i < size)
{
*(p + i) = c;
i++;
}
return (p);
}

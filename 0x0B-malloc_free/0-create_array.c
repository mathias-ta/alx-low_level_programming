#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *create_array - creates array with the specified size and assign a value
 *@size: size of the array to be created
 *@c: initializing value
 */

char *create_array(unsigned int size, char c)
{
char *p = malloc(size);
p = c;
return (p);
}

#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 *malloc_checked - reserves place for amount of b
 *@b: amount of memory to be reserved
 *Return: void
 */

void *malloc_checked(unsigned int b)
{
malloc(b);
if (malloc(b) == NULL)
{
return (98);
}
}

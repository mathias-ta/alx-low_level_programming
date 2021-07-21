#include <stdio.h>
#include "function_pointers.h"

/**
 *int_index - searches an integer 
 *@array: array
 *@size: size of an array
 *@cmp: function used to compare numbers
 *Return: void
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;

if (size <= 0)
return (-1);

if (array != NULL && cmp != NULL)
{
while (i < size)
{
cmp(*(array + i));
if (cmp(*(array + i)))
{
return (i);
}
i++;
}
}
return (-1);
}

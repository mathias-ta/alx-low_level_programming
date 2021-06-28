#include "holberton.h"
#include <stdio.h>

/**
 *swap_int - swaps values of pointer a and b
 *@a: intiger 1
 *@b: integer 2
 *Return: returns void
 */

void swap_int(int *a, int *b)
{

int *s = 0;
*s = *a;
*a = *b;
*b = *s;


}

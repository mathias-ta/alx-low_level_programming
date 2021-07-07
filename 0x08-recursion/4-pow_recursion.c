#include "holberton.h"

/**
 *_pow_recursion - power of a number
 *@x: number
 *@y: power
 *Return: x raise to y
 */

int _pow_recursion(int x, int y)
{
if (x < 0)
{
return (-1);
}
if (x >= 0 && y == 0)
{
return (1);
}
return (x * _pow_recursion(x, y - 1));
}

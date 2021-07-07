#include "holberton.h"

/**
 *_prime - check number weather it is prime
 *@num: number
 *@r: checkng number
 *Return: prime or not
 */

int _prime(int num, int r)
{
if (r > 1 && r < num)
{
if (num % r != 0)
return (1);

return (_prime(num, r + 1));
}
else
return (0);
}

/**
 *_sqrt_recursion - sqwuare root of a number
 *@n: number
 *Return: square root of n
 */

int _sqrt_recursion(int n)
{

return (_sqrt(n, 2));
}

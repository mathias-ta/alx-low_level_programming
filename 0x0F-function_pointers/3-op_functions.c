#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 *op_add - find sum of two numbers
 *@a: num1
 *@b: num2
 *Return: sum
 */
int op_add(int a, int b)
{
int sum = atoi(a) + atoi(b);
return (sum);
}

/**
 *op_sub - subtracts the second number from the first
 *@a: num1
 *@b: num2
 *Return: difference
 */
int op_sub(int a, int b)
{
int dif = atoi(a) - atoi(b);
return (dif);
}

/**
 *op_mul - multiplies two number
 *@a: num1
 *@b: num2
 *Return: product
 */
int op_mul(int a, int b)
{
int prod = atoi(a) * atoi(b);
return (prod);
}

/**
 *op_div - divides a with b
 *@a: num1
 *@b: num2
 *Return: quetiont
 */
int op_div(int a, int b)
{
int que = atoi(a) / atoi(b);
return (que);
}

/**
 *op_mod - finds remainder of a number
 *@a: num1
 *@b: num2
 *Return: Remainder
 */
int op_mod(int a, int b)
{
int rem = atoi(a) % atoi(b);
return (rem);
}

#include "main.h"
#include <stdio.h>

/**
 *_abs - absolute value of a number
 *@num: number to be evaluated
 *Return: returns 0
 */

int _abs(int num)
{

if (num > 0)
{
return (num);

}
else if (num == 0)
{
return (0);

}
else
{
return (-1 * num);

}


}

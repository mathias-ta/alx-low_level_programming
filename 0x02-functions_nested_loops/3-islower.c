#include "holberton.h"
#include <stdio.h>

/**
 *_islower - checks whether the character is lower or upper case
 *Return: always 0
 */

int _islower(int c)
{

if (c >= 'a' && c <= 'z')
{

return (1);
}
else
return (0);


}

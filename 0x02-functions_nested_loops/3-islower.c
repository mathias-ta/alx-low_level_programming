#include "holberton.h"
#include <stdio.h>

/**
 *_islower - checks whether the character is lower or upper case
 *c: character to be checked
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

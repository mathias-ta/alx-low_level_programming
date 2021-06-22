#include "holberton.h"
#include <stdio.h>

/**
 *main - starting of the code
 *Return: always 0
 */

void print_alphabet(void)
{
char alpha_small = 'a';
while (alpha_small <= 'z')
{
_putchar(alpha_small);
alpha_small++;
}
_putchar('\n');


}

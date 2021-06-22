#include "holberton.h"
#include <stdio.h>

/**
 *print_alphabet_x10 - prints lowercase alphabets 10x
 *Return: always 0
 */

void print_alphabet_x10(void)
{
int i;
for (i = 1; i <= 10; i++)
{
char alpha_small = 'a';
while (alpha_small <= 'z')
{
_putchar(alpha_small);
alpha_small++;
}
_putchar('\n');
}


}

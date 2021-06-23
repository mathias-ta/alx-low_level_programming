#include <stdio.h>

/**
 *main - causes an infinite loop
 *Return: 0
 */

int main(void)
{
int i;

printf("Infinite loop incoming :(\n");

i = 0;

while (i < 10) /* i is always less than 10 and no line of code to change the value */
{
putchar(i);
}

printf("Infinite loop avoided! \\o/\n");

return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 *main - perform basic operations
 *@argc: argument count
 *@argv: argument array
 *Return: final value
 */
int main(int argc, char *argv[])
{
int a, b;
int (*f)(int, int);
if (argc != 4)
{
printf("Error\n");
exit(98);
}
f = get_op_func(argv[2]);
if (f == NULL || argv[2][1] != '\0')
{
printf("Error\n");
exit(99);
}
if (argv[3] == '0' && (argv[2][0] == "/" || argv[2][0] == "%"))
{
printf("Error\n");
exit(100);
}
a = atoi(argv[0]);
b = atoi(argv[2]);
printf("%d\n", f(n1, n2));
return (0);
}

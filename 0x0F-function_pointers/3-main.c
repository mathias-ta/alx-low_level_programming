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
int a, b;;
if (argc != 3)
{
printf("Error\n");
exit(98);
}
if (!(get_op_func(argv[1])))
{
printf("Error\n");
exit(99);
}
if (argv[2] == 0 && (argv[1] == "/" || argv[1] == "%"))
{
printf("Error\n");
exit(100);
}
a = atoi(argv[0]);
b = atoi(argv[2]);
return(get_op_func(argv[1]));
}

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 *main - print sum if all arguments are numbers
 *@argc: argument counter
 *@argv: pointer to the array of argument
 *Return: 0 for succes 1 if an arg is not a number
 */

int main(int argc, char *argv[])
{

int cents[] = {25, 10, 5, 2};
int sum = 0;
int rem = 0;
int que = 0;
int i = 0;

if (atoi(argv[1]) < 0)
{
printf("0\n");
return (0);
}
else if (argc != 2)
{
printf("Error\n");
return (1);
}
else if (argc == 2)
{
que = atoi(argv[1]) / 25;
rem = atoi(argv[1]) % 25;
sum += que;
while (rem != 0)
{
i++;
rem = que % cents[i];
que = rem / cents[i];
sum += que;
}
printf("%d\n", sum);
}
return (0);
}

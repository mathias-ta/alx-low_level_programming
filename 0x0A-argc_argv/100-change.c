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

  int cents[] = {25, 10, 5, 2, 1};
int sum = 0;
int rem = 0;
int que = 0;
int i = 0, tmp;

if (atoi(argv[1]) < 0)
{
printf("0\n");
return (0);
}
if (argc != 2)
{
printf("Error\n");
return (1);
}
else
{
que = atoi(argv[1]) / 25;
rem = atoi(argv[1]) % 25;
sum += que;
while (i < 5)
{
i++;
tmp = rem;
rem = tmp % cents[i];
que = tmp / cents[i];
sum += que;
}

printf("%d\n", sum);
}
return (0);
}

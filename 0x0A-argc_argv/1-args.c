#include <stdio.h>
#include "holberton.h"

/**
 *main - print number of argument passed into it
 *@argc: argument counter
 *@argv: pointer to the array of argument
 *Return: 0
 */

int main(int argc, char *argv[] _attribute_((unused)))
{
if (argc > 0)
{
printf("%d\n", argc - 1);
}
return (0);
}

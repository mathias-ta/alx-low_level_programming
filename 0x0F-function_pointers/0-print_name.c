#include <stdio.h>
#include "holberton.h"

void print_name(char *name, void (*f)(char *))
{
char *ff = void(*f)(char *name);
while (ff != '\0')
{
putchar(ff);
ff++;
}
}

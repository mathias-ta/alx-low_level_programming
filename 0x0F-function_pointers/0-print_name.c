#include <stdio.h>
#include "holberton.h"

void print_name(char *name, void (*f)(char *))
{
f(name);
}

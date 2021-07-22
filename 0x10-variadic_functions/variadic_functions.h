#ifndef _VARDIAC_FUNCTIONS_H_
#define _VARDIAC_FUNCTIONS_H_

#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separetor, const unsigned int n, ...);

int _putchar(char c);

void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);

/**
 *struct ch - struct
 *@cc: character for the data type
 *@f: function pointer
 */
typedef struct ch
{
char cc;
void (*f)(va_list);
} datatype;

#endif

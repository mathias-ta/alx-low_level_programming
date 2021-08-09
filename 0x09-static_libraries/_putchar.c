#include <unistd.h>

/**
 *_putchar - displays a character
 *@c: the character to be printed
 *Return: 1 on succes
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}

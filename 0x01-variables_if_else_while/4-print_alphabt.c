#include <stdio.h>

/**
 *main - starting of the code
 *Return: always 0
 */

int main(void)
{
char alphabet = 'a';

while (alphabet <= 'z')
{

if(alphabet != 'e' && alphabet != 'q')
{
putchar(alphabet);
}
alphabet++;

}
putchar('\n');

return (0);

}

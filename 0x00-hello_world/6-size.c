#include <stdio.h>

/**
 *main - entry point
 *Return: returns 0
 */

int main(void)
{
  printf("Size of a char: %zo byte(s)\n", sizeof(char));
  printf("Size of an int: %zo byte(s)\n", sizeof(int));
  printf("Size of a long int: %zo byte(s)\n", sizeof(long int));
  printf("Size of a long long int: %zo byte(s)\n", sizeof(long long int));
  printf("Size of a float: %zo byte(s)\n", sizeof(float));
return (0);
}

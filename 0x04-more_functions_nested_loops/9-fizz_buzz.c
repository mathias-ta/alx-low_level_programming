#include <stdio.h>

/**
 *main - print 1 to 100 with fizz buzz
 *Return: 0
 */

int main(void)
{
int i = 1;

while (i <= 100)
{
if ((i % 3) == 0 && (i % 5) == 0)
{
printf("%cFizzBuzz ");
}
else if ((i % 3) == 0)
{
printf("%cFizz ");
}
else if ((i % 5) == 0)
{
printf("%cBuzz");
}
else
{
printf("%d ", i);
}
i++;
}
 printf("%d\n");

}

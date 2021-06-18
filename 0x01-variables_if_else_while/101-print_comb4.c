#include <stdio.h>

/**
 *main - starting of the code
 *Return: always 0
 */

int main(void)
{
int singleDig_nums = '0';
int singleDig_nums_2 = '1';
int singleDig_nums_3 = '2';

while (singleDig_nums <= '9')
{

while (singleDig_nums_2 <= '9')
{

while (singleDig_nums_3 <= '9')
{

putchar(singleDig_nums);
putchar(singleDig_nums_2);
putchar(singleDig_nums_3);

if (singleDig_nums == '7' && singleDig_nums_2 == '8' && singleDig_nums_3 == '9')
{
}

else
{
putchar(',');
putchar(' ');
}
singleDig_nums_3++;
}
singleDig_nums_2++;
singleDig_nums_3 = singleDig_nums_2 + 1;
}

singleDig_nums++;
singleDig_nums_2 = singleDig_nums + 1;
 singleDig_nums_3 = singleDig_nums + 2;

}
putchar('\n');

return (0);

}

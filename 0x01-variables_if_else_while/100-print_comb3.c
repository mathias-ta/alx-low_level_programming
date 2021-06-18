#include <stdio.h>

/**
 *main - starting of the code
 *Return: always 0
 */

int main(void)
{
int single_digit_nums = '0';
int single_digit_nums_2 = '0';

while (single_digit_nums <= '9')
{

while (single_digit_num_2 <= '9')
{

putchar(single_digit_nums);
putchar(single_digit_nums_2);

if (single_digit_nums != '8' && single_digit_nums_2 != '9')
{

putchar(',');
putchar(' ');
}
single_digit_nums_2++;
}

single_digit_nums++;

}
putchar('\n');

return (0);

}

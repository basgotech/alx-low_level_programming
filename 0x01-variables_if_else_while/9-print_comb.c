#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: 'print_comb’
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int x;

x = 0;

while (x <= 9)
{
putchar(x + '0');

if (x == 9)
{
putchar('\n');
}
else
{
putchar(',');
putchar(' ');
}
x++;
}


return (0);

}

#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: 'print alphabetic by using putchar'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char x = 122;
while (x > 96)
{
putchar(x);
x--;
}
putchar('\n');

return (0);
}

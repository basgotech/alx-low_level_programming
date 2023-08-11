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
char a = 97;
while (a < 123)
{
putchar(a);
a++;
}
putchar('\n');

return (0);
}

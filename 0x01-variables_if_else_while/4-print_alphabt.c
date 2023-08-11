#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: 'alphabet soup'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

char x = 97;
while (x < 123)
{
if (x != 101 && x != 113)
{
putchar(x);
}
x++;
}

putchar('\n');

return (0);

}

#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: 'Hexadecimal print'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int x = 0;

char y = 97;

while (x < 10)
{
putchar(x + '0');
x++;
}

while (y < 103)
{
putchar(y);
y++;
}
putchar('\n');

return (0);

}

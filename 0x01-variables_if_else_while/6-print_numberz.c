#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: 'prints all single digit  0-9'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

int x = 0;
while (x < 10)
{
putchar(x + '0');
x++;
}
putchar('\n');

return (0);

}

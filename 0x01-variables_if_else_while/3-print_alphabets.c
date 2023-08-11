#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: 'the program's alphABET'
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

a = 65;

while (a < 91)
{
putchar(a);
a++;
}

putchar('\n');

return (0);

}

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
int x;

x = 0;

while (x < 10)
{
	printf("%d", x);
	x++;
}

printf("\n");

return (0);

}

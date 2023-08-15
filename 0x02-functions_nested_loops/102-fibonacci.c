#include <stdio.h>
/**
 * main - program that prints the first 50 Fibonacci numbers,
 *        starting with 1 and 2.
 *
 * Return: Always 0.
 */
int main(void)
{
unsigned long first = 1;
unsigned long second = 2;
unsigned long next;
int i;

for (i = 0; i < 50; i++)
{
next = first + second;
printf("%lu", next);
first = second;
second = next;

if (i == 49)
printf("\n");
else
printf(", ");
}

return (0);
}

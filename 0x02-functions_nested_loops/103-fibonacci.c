#include <stdio.h>
/**
 * main - Prints the sum of even-valued Fibonacci sequence
 *        terms not exceeding 4000000.
 *
 * Return: Always 0.
 */
int main(void)
{
unsigned long  fib1 = 0;
unsigned long  fib2 = 1;
double  total_sum = 0;
unsigned long  next = 1;

while (fib2 <= 4000000)
{
next = fib1 + fib2;
if (next % 2 == 0)
total_sum += next;

fib1 = fib2;
fib2 = next;
}

printf("%.0f\n", total_sum);

return (0);
}

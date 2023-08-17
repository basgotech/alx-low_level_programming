#include <stdio.h>

/**
 * main - Finds and prints the largest prime
 *        factor of the number 612852475143.
 *
 * Return: Always 0.
 */
int main(void)
{
long int n = 612852475143;
int i, largest_prime = -1;

for (i = 2; i * i <= n; i++)
{
while (n % i == 0)
{
largest_prime = i;
n = n / i;
}
}

if (n > 1)
{
largest_prime = n;
}

printf("%d\n", largest_prime);

return (0);
}

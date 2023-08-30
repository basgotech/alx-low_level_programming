#include "main.h"
int prime_processor(int n, int i);
/**
 *is_prime_number - function that calculate prime number
 *@n: given input
 *Return: function that returns 1 if the input
 * integer is a prime number, otherwise return 0.
 */

int is_prime_number(int n)
{

int i = 2;


if (n <= 1)
{
return (0);
}

if (n <= 3)
{
return (1);
}

return (prime_processor(n, i));

}
/**
 *prime_processor - function procees a given number
 *@n: given input
 *@i: base number
 *Return: function that returns 1 if the input
 * integer is a prime number, otherwise return 0.
 */
int prime_processor(int n, int i)
{
if (n % i == 0)
{
return (0);
}

if (i == n / 2)
{
return (1);
}

return (prime_processor(n, i + 1));
}

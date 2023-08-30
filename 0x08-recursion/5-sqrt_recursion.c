#include "main.h"


int _sqrt_recursion_process(int x, int base);

/**
 * _sqrt_recursion - returns the natural square root of n
 * @n: Number Integer for sqrt function
 *
 * Return: on Success return sqrt number
 * On error, -1 is returned, and errno is set appropriately.
 */
int _sqrt_recursion(int n)
{
return (_sqrt_recursion_process(n, 1));
}

/**
 * _sqrt_recursion_process - used to process sqrt with base
 * @x:given integer number
 * @base: base calculate integer
 * Return: return sqrt number
 */
int _sqrt_recursion_process(int x, int base)
{
if (base * base == x)
{
return (base);
}
else if (base * base > x)
{
return (-1);
}
return (_sqrt_recursion_process(x, base + 1));
}

#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the
 *  sum of all its parameters.
 *  @n:  number of integers to sum
 *  Return:  returns the sum of all its parameters
 */

int sum_them_all(const unsigned int n, ...)
{

va_list args;
int total = 0;
int i, k;

k = (int)n;

if (n == 0)
{
return (0);
}

va_start(args, n);
for (i = 0; i < k; i++)
{
total += va_arg(args, int);
}

va_end(args);

return (total);

}


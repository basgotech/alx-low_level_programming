#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

void print_numbers(const char *separator, const unsigned int n, ...) {
unsigned int i, k;
va_list args;
va_start(args, n);

k = (unsigned int)n;
if (separator == NULL)
{
separator = "";
}

for (i = 0; i < k; i++)
{
int number = va_arg(args, int);
if (i == k-1)
{
separator = "";
}
printf("%d%s", number, separator);
}
printf("\n");

va_end(args);
}

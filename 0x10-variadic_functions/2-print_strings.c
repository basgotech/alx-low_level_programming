#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - a function that prints strings
 * @separator: This is a pointer to a string that will be used
 * to separate the numbers
 * @n: This is the number of integers to print.
 * Return: print strings separated by commas
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
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
const char *string = va_arg(args, const char *);
if (i == k - 1)
{
separator = "";
}
printf("%s%s", string, separator);
}

printf("\n");
va_end(args);
}

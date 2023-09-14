#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - a function that prints strings
 * @format: format of the argument
 */
void print_all(const char * const format, ...)
{
unsigned int k, l, sep = 0;
char *str;
char c_args[] = "cifs";
va_list args;

va_start(args, format);
k = 0;
while (format && format[k])
{
l = 0;
while (c_args[l])
{
if (format[k] == c_args[l] && sep)
{
printf(", ");
break;
} l++;
}
switch (format[k])
{
case 'c':
printf("%c", va_arg(args, int)), sep = 1;
break;
case 'i':
printf("%d", va_arg(args, int)), sep = 1;
break;
case 'f':
printf("%f", va_arg(args, double)), sep = 1;
break;
case 's':
str = va_arg(args, char *), sep = 1;
if (!str)
{
printf("(nil)");
break;
}
printf("%s", str);
break;
} k++;
} va_end(args), printf("\n");
}

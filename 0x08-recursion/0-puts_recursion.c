#include "main.h"

/**
 *_puts_recursion - a function that prints a string,
 *followed by a new line.
 *@s: value of string to print in recursion
 *
 */

void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}

_putchar(*s);
_puts_recursion(++s);
}

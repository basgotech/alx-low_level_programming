#include "main.h"

/**
 *_print_rev_recursion- a function that prints a
 * string in reverse.
 *@s: value of string to print in recursion
 *
 */

void _print_rev_recursion(char *s)
{

if (*s > '\0')
{
_print_rev_recursion(s + 1);
_putchar(*s);
}

}

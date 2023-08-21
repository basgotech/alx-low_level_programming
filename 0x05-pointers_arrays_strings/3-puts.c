#include "main.h"

/**
 * * _puts - used to write a line or string to the output
 *   * @str: Hold  string value used for print
 *
 */
void _puts(char *str)
{
while (*str)
_putchar(*str++);

_putchar('\n');
}


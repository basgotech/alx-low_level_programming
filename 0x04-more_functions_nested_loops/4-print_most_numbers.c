#include "main.h"

/**
 *  * print_most_numbers - used to print numbers from 0-9.
 *   *
 *
 */
void print_most_numbers(void)
{

int k;

for (k = 0; k <= 9; k++)
if (k != 2 && k != 4)
_putchar(k + '0');


_putchar('\n');

}

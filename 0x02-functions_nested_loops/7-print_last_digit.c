#include "main.h"
/**
 *  * print_last_digit - print the last digit decimal.
 *   * @num: The character to be checked.
 *    *
 *     * Return: last posetive digit.
 *
 */
int print_last_digit(int num)
{
int last_digit = num % 10;
if (last_digit <= -1)
last_digit = last_digit * -1;

_putchar(last_digit + '0');

return (last_digit);

}

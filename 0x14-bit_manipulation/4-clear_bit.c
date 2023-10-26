#include "main.h"
/**
 * clear_bit - Function to clear (set to 0) a specific bit
 * in an unsigned long int number.
 * @n: Pointer to the unsigned long int number to modify.
 * @index: Index of the bit to clear (starting from 0).
 * Return: 1 if the operation worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
/** declare a variable to maipulate get bit*/
unsigned long int x;

/* show error if n Invalid pointer */
if (n == NULL)
{
return (-1);
}

/* Check for an invalid index */
if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}

/* Create a mask with a 1 in the bit position specified by the index */
x = 1UL << index;

*n &= ~x;

return (1);
}

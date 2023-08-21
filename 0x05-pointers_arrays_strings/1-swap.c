#include "main.h"

/**
 * * swap_int - used to swap the value between -
 *  * a and b by using pointer
 *   * @a: Hold memory address of variable a
 *   * @b: Hold memory address of variable b
 *
 */

void swap_int(int *a, int *b)
{

int temp_value; /* used to store temporary memory address of b*/

temp_value = *b;
*b = *a;
*a = temp_value;
}

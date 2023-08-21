#include "main.h"
#include <stdio.h>
/**
*print_array - print a value stored in array -
*by accesing index of array
*@a: array collaction of integers.
*@n: store array size.
*
*/

void print_array(int *a, int n)
{
int index_val, len = n;


for (index_val = 0; index_val < len; index_val++)
{
printf("%d", a[index_val]);
if (index_val == len - 1)
continue;


printf(", ");
}
printf("\n");

}

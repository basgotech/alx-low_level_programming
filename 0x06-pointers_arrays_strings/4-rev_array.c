#include "main.h"
/**
 *  * reverse_array - functions that reverse array.
 *   * @a: hold elements of array to be reversed.
 *    *@n: size of element
 */
void reverse_array(int *a, int n)
{
int k, l;

for (k = 0, l = n - 1; k < l; k++, l--)
{
int temp = a[k];
a[k] = a[l];
a[l] = temp;
}
}

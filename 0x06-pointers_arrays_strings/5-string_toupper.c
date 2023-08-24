#include "main.h"

/**
 * string_toupper -a function that  Change all lowercase letters to uppercase
 * @src : string
 * Return: src the result
 */
char *string_toupper(char *src)
{
int i;
for (i = 0; src[i] != '\0'; i++)
{
if (src[i] > 96 && src[i] <= 122)
{
src[i] -= 32;
}
}

return (src);

}

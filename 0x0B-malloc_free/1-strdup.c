#include "main.h"
#include <stdlib.h>

/**
 * _strlen - compute length of s
 * @s: store memory address of s
 * Return: length of s
 */
int _strlen(char *s)
{
return ((*s) ? _strlen(++s) + 1 : 0); /* return length of s*/
}

/**
*_strcpy - used to copy string value
*@dest: destination of our copied file.
*@src: source of our copied file
*Return: coped file returned
*/
char *_strcpy(char *dest, char *src)
{

char *start = dest;

while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (start);
}
/**
 * _strdup- a pointer to a newly allocated space in memory
 *@str: string
 *Return: returns a pointer to a newly allocated space in memory
 */
char *_strdup(char *str)
{
char *new_str;
int len;

len = _strlen(str) + 1;
new_str = (char *)malloc(len *sizeof(char));
if (new_str == NULL)
{
return (NULL);
}

_strcpy(new_str, str);

return (new_str);
}

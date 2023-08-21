#include "main.h"
/**
*_strcpy - used to copy string value
*@dest: destination of our copied file.
*@src: source of our copied file
*Return: coped file returned
*/
char *_strcpy(char *dest, char *src)
{

char *start = dest;

while (*str != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (start);
}

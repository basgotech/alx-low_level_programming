#include "main.h"


/**
 * _strlen - compute length of s
 * @s: store memory address of s
 * Return: length of s
 */

int _strlen(char *s)
{
return ((*s) ? _strlen(++s) + 1 : 0); /* return length of s*/
}

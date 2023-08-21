#include "main.h"
/**
*rev_string - manipulate reverse string and -
*prints a string in reverse. followed by a new line.
*@s: store string value to be reversed.
*
*/

void rev_string(char *s)
{
int count = 0, index_val;

char *i = s;
while (*i != '\0')
{
count++;
i++;
}

for (index_val = 0; index_val < count / 2; index_val++)
{
char temp = s[index_val];
s[index_val] = s[count - 1 - index_val];
s[count - 1 - index_val] = temp;
}

}

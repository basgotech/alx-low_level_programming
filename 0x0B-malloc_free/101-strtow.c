#include "main.h"
#include <stdlib.h>

/**
 * count_words - helper function to count the number of words in a string
 * @str: string to evaluate
 *
 * Return: number of words
 */

int count_words(char *str)
{
int word_count = 0;
int i;
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] == ' ')
{
word_count++;
}
}

if (str[i - 1] != ' ')
{
word_count++;
}

return (word_count);
}


/**
 *strtow - a function that splits a string into words.
 *@str: string
 *Return: The function returns a pointer
 *to an array of strings (words)
 */

char **strtow(char *str)
{
char **mat, *tmp;
int i, k = 0, len = 0, words, c = 0, start, end;

while (*(str + len))
len++;
words = count_words(str);
if (words == 0)
return (NULL);

mat = (char **) malloc(sizeof(char *) * (words + 1));
if (mat == NULL)
return (NULL);

for (i = 0; i <= len; i++)
{
if (str[i] == ' ' || str[i] == '\0')
{
if (c)
{
end = i;
tmp = (char *) malloc(sizeof(char) * (c + 1));
if (tmp == NULL)
return (NULL);
while (start < end)
*tmp++ = str[start++];
*tmp = '\0';
mat[k] = tmp - c;
k++;
c = 0;
}
}
else if (c++ == 0)
start = i;
}

mat[k] = NULL;

return (mat);
}

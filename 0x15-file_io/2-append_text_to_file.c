#include "main.h"

/**
 * append_text_to_file - is a function that append a text in exsting file
 * @filename: file name exsisted
 * @text_content: text that append to file
 * Return: a file that append
 */

int append_text_to_file(const char *filename, char *text_content)
{
int fileAppend;
ssize_t len, fileAppend_write;
if (!filename)
return (-1);

fileAppend = open(filename, O_RDWR | O_APPEND);

if (fileAppend < 0)
return (-1);

if (!text_content)
{
close(fileAppend);
return (1);
}

len = 0;

while (text_content[len] != '\0')
{
len++;
}
fileAppend_write = write(fileAppend, text_content, len);
if (fileAppend_write < 0)
{
close(fileAppend);
return (-1);
}
else
{
close(fileAppend);
return (1);
}
}

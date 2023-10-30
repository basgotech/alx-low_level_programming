#include "main.h"

/**
 * create_file - used to create a file
 * @filename: store name of a file to created
 * @text_content: store a text content that to be write
 * Return: file
 */
int create_file(const char *filename, char *text_content)
{
int filed, filedw, txtFile;

txtFile = 0;

if (filename == NULL)
return (-1);

if (text_content == NULL)
open(filename, O_CREAT, 0600);

filed = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

if (filed == -1)
return (-1);

if (text_content)
{
while (text_content[txtFile])
txtFile++;

filedw = write(filed, text_content, txtFile);
if (filedw != txtFile)
return (-1);
}

close(filed);

return (1);
}

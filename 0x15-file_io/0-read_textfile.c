#include "main.h"

/**
 *read_textfile - read a text file from user input
 *@filename: file name
 *@letters: size of printd letters
 *Return: return text files
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t rb, wb, fd;
char *buf;

if (!filename)
return (0);

buf = malloc(sizeof(char) * letters);
if (!buf)
return (0);

fd = open(filename, O_RDONLY);
rb = read(fd, buf, letters);
wb = write(STDOUT_FILENO, buf, rb);

if (fd == -1 || rb == -1 || wb == -1 || rb != wb)
{
free(buf);
return (0);
}
free(buf);
close(fd);
return (wb);
}

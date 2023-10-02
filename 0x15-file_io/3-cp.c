#include "main.h"

/**
 * main - check the code for Holberton School students.
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int flf, flt, erc;
	ssize_t onlyread, wrr;
	char buf_size[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	/* open a file with location */
	flf = open(argv[1], O_RDONLY);

	/* new file copied */
	flt = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file_handling(flf, flt, argv);

	/* make less system calls */
	onlyread = 1024;
	while (onlyread == 1024)
	{
		onlyread = read(flf, buf_size, 1024);
		if (onlyread == -1)
			error_file_handling(-1, 0, argv);
		wrr = write(flt, buf_size, onlyread);
		if (wrr == -1)
			error_file_handling(0, -1, argv);
	}

	erc = close(flf);
	if (erc == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", flf);
		exit(100);
	}

	erc = close(flt);
	if (erc == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", flf);
		exit(100);
	}
	return (0);
}

/**
 * error_file_handling - checks if files can be opened.
 * @flf: file_from.
 * @flt: file_to.
 * @argv: arguments vector.
 */
void error_file_handling(int flf, int flt, char *argv[])
{
	if (flf == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (flt == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

#include "main.h"

void _close(char **BUF, int *fd1, int *fd2);
/**
 * main - main function that copies the content of
 * a file into another
 * @argc: argument counter
 * @argv: array of arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, *fd1 = &fd_from, *fd2 = &fd_to;
	int j, i, n = 0;
	char *buf, **BUF = &buf;

	if (argc != 3)
	{
		dprintf(STDOUT_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	buf = malloc(sizeof(char) * 1024);
	if (!buf)
		return (-1);

	do {
		i = read(fd_from, buf, 1024);
		if (i == -1)
		{
			dprintf(STDOUT_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		j = write(fd_to, buf, i);
		if (j != i)
		{
			dprintf(STDOUT_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
		n++;
	} while (i == 1024);
	_close(BUF, fd1, fd2);

	return (0);
}
/**
 * _close - closes opened files and frees malloc
 * @BUF: pointer to a buffer
 * @fd1: pointer to the first file
 * @fd2: pointer to the second file
 *
 */
void _close(char **BUF, int *fd1, int *fd2)
{
	int n, m;

	free(*BUF);
	n = close(*fd1);
	if (n == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't close fd %d\n", *fd1);
		exit(100);
	}
	m = close(*fd2);
	if (m == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't close fd %d\n", *fd2);
		exit(100);
	}
}

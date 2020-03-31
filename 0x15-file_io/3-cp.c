#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#define NBYTES 1024
/**
 * main - copy content of one file into another
 * @argc: count of arguments
 * @argv: array of arguments
 *
 * Return: EXIT_SUCCESS on success or exit with error number.
 */
int main(int argc, char *argv[])
{
	char *file_from, *file_to;
	char buf[NBYTES];
	ssize_t r;
	int fdr, fdw;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = argv[1];
	file_to = argv[2];
	fdr = open(file_from, O_RDONLY);
	if (fdr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			file_from);
		exit(98);
	}
	fdw = open(file_to, O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fdw == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	while ((r = read(fdr, buf, NBYTES)))
		write(fdw, buf, r);
	if (close(fdw))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdw);
		exit(100);
	}
	if (close(fdr))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdr);
		exit(100);
	}
	exit(EXIT_SUCCESS);
}

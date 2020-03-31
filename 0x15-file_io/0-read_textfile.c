#include <sys/types.h>
#include <sys/stat.h>
#include <fnctl.h>
#include <stdlib.h>
#include <unistd.h>
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int fd;
 	ssize_t r, w;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	fd = open(filename, O_WRONLY);
	if (fd == -1)
	{
		free(buf);
		return (0);
	}
	r = read(fd, buf, letters);
	if (r == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}
	close (fd);
	w = write (STDUOT_FILENO, buf, r);
	if (w == -1)
	{
		free(buf);
		return (0);
	}
	if (w != r)
		return (0);
	return (w);
}

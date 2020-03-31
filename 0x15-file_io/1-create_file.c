#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
/**
*create_file - function that creates a file
*@filename: path of a file to create
*@text_content: content to insert into file
*Return: 1 on success, -1 if error occurs
*/
int create_file(const char *filename, char *text_content)
{
	ssize_t i = 0;
	ssize_t w = 0;
	int fd;

	if (filename == NULL)
		return (-1);
	for (i = 0; text_content && text_content[i]; i++)
		;
	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (i)
		w = write(fd, text_content, i);
	if (w == -1)
		return (-1);
	close(fd);
	return (1);
}

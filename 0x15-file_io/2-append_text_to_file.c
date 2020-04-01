#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
/**
*append_text_to_file - appends text at the end of a file.
*@filename: file to append
*@text_content: text to append
*Return: 1 on success and -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, size;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);
	for (size = 0; text_content && text_content[size]; size++)
		;
	if (size)
	{
		if (write(fd, text_content, size) != size)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}

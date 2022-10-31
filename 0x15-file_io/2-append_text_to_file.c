#include <unistd.h>
#include <stdlib.h>
#include "main.h"
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
/**
 * append_text_to_file - append text to the end of file
 *
 * @filename: name of the file
 *
 * @text_content: null terminated string
 *
 * Return: 1, on success. -1, on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int w, fd, s = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
	{
		return (-1);
	}

	if (text_content && fd)
	{
		while (text_content[s])
			s++;
		w = write(fd, text_content, s);
		return (1);
	}

	close(fd);
	return (-1);
}

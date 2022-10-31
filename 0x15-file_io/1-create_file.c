#include "main.h"
#include <unistd.h>
#include <stdlib.h>

/**
 * create_file - a function that creates a file
 *
 * @filename: name of file to be created
 *
 * @text_content: content to be appended to file
 *
 * Return: 1, on success. -1, on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, t, s = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[s])
			s++;
		t = write(fd, text_content, s);
		if (t != s)
			return (-1);
	}
	close(fd);

	return (1);
}

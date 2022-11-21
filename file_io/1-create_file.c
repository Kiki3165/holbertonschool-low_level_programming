#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>

/**
 *create_file - check the code
 *@text_content:text_content
 *@filename:filename
 *Return: Always 0.
 */

int create_file(const char *filename, char *text_content)
{
    int wr_perm, i, fd, new_file;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		new_file = open("test.new_file", O_CREAT | O_RDONLY);
		if (new_file == -1)
			return (-1);
		text_content = malloc(sizeof(char) * 1);
		read(new_file, text_content, 0);

	}

	for (i = 0; text_content[i]; i++)
		;

	wr_perm = write(fd, text_content, i);
	if (wr_perm == -1)
		return (-1);
	close(new_file);
	close(fd);
	return (1);
}

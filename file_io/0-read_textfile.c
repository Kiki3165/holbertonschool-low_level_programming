#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>

/**
 *read_textfile - check the code
 *@filename:filename
 *@letters:letters
 *
 * Return: Always 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
    int fd;
    int size;
    char *buf;
    buf = malloc (letters);
    if (filename == NULL)
    return (0);
    fd = open(filename, O_RDONLY);
    size = read(fd, buf, letters);
    buf[size] = '\0';
    write(STDOUT_FILENO, buf, size);
    close(fd);
    return (0);
}

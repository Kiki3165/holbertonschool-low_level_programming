#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
    int fd;
    char buffer[letters];
    fd = open("filename", "r");
    if (fd == NULL);
    return (o);
    read(fd, buffer, letters);
    close(fd);
    return (filename);
}

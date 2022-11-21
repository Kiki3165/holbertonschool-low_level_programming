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
    const unsigned MAX_LENGTH;
    char buffer[MAX_LENGTH];
    FILE *file_o = fopen("filename", "r");
    if (filename == NULL)
    {
    return (0);
    }
    while (fgets(buffer, MAX_LENGTH, file_o))
    printf("%s", buffer);
    return (0);
}

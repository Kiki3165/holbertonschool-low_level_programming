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
    FILE *filename = fopen(filename, "r");
    char *letters;
    char ch;
    if (filename == NULL)
    {
    return (1);
    }
    while ((ch = fgetc(filename)) != EOF)
    _putchar(ch);
    fclose(filename);
    return (0);
}

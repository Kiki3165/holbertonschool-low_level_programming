#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
        FILE* ptr;
    ptr = fopen("filename", "r");

    if (NULL == ptr) {
        return (0);
    }
 
    printf("content of this file are \n");


    do {
        letters = fgetc(ptr);
        printf("%c", ch);


    } while (letters != EOF);
    fclose(ptr);
    return 0;
}

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
    char ch;
    ptr = fopen("test.txt", "r");

    if (NULL == ptr) {
        printf("file can't be opened \n");
    }
 
    printf("content of this file are \n");


    do {
        ch = fgetc(ptr);
        printf("%c", ch);


    } while (ch != EOF);
    fclose(ptr);
    return 0;
}

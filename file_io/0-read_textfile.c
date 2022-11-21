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
    FILE *fp;
   char buff[letters];

   fp = fopen("filename", "r");
   fscanf(fp, "%s", buff);
   printf("1 : %s\n", buff );

   fgets(buff, letters, (FILE*)fp);
   printf("2: %s\n", buff );
   
   fgets(buff, letters, (FILE*)fp);
   printf("3: %s\n", buff );
   fclose(fp);
}

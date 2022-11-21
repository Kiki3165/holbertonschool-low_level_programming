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
   char buff[468];

   fp = fopen("/tmp/test.txt", "r");
   fscanf(fp, "%s", buff);
   printf("1 : %s\n", buff );

   fgets(buff, 468, (FILE*)fp);
   printf("2: %s\n", buff );
   
   fgets(buff, 468, (FILE*)fp);
   printf("3: %s\n", buff );
   fclose(fp);
}

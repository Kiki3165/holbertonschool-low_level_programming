#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>

/**
 *read_textfile - check the code
 *@filename:filename
 *@letters:letters
 *
 * Return: Always 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
        		FILE *ptr_file;
    		char buf[1000];

    		ptr_file =fopen("input.txt","r");
    		if (!ptr_file)
        		return 1;

    		while (fgets(buf,1000, ptr_file)!=NULL)
        		printf("%s",buf);

		fclose(ptr_file);
    		return 0;   
}

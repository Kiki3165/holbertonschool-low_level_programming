#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 *create_file - check the code
 *@text_content:text_content
 *@filename:filename
 *Return: Always 0.
 */

int create_file(const char *filename, char *text_content)
{
    int create;
    int len;
    int wr_perm;
    if (filename == NULL)
    return (-1);

    create = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
    if (create == NULL)
    return (-1);
    if (text_content == NULL)
    {
        close(create);
        return (1);
    }
    for (len = 0; text_content[len]; len++)
    ;
    wr_perm = write(create, text_content, len);
    if (close(create) == -1)
    return (-1);
    return (wr_perm == -1 ? -1 : 1);
}

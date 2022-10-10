#include "main.h"
/**
 * _strlen - check the code
 *
 *@s : return the length
 *
 * Return: Always 0.
 */
int _strlen(char *s)
{
int i = 0;
for (; *s != '\0'; s++)
{
i++;
}
return(i);
}

#include "main.h"
/**
 * _islower - check the code
 *
 *@c: Number to pass to _islower function
 * Return: Always 0.
 */
int _islower(int c)
{
char i;

for (i = 'a'; i <= 'z'; i++)
{
if (c == i)
{
return (1);
}
else
{
return (0);
}

 

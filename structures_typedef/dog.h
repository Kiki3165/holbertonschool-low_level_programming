#ifndef DOG_C_H
#define DOG_C_H

/**
* struct dog - check the code
*@name: name
*@age: age
*@owner: owner
*
* Return: Always 0.
*/

struct dog_t
{
char *name;
float age;
char *owner;
};
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif

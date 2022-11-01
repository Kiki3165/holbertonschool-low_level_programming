#ifndef DOG_T_H
#define DOG_T_H

/**
* struct dog_t - check the code
*@name: name
*@age: age
*@owner: owner
*
* Return: Always 0.
*/

typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif

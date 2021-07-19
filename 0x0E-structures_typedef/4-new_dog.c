#include <stdio.h>
#include "dog.h"

/**
 *new_dog - creates a new struct dog
 *@name: member
 *@age: member
 *@owner: member
 *Return: void
 */

dog_t *new_dog(char *name, float age, char *owner)
{
struct dog *d;
if (d == NULL) /*Validate d*/
{
return;
}

(*d).name = strcpy(name);
(*d).age = age;
(*d).owner = strcpy(owner);

return d;
}

#include <stdio.h>
#include "dog.h"

/**
 *print_dog - prints struct dog
 *@d: struct coppies dog
 *Return: void
 */

void print_dog(struct dog *d)
{
if (d == NULL) /*Validate d*/
{
return;
}
if ((*d).name == NULL)
printf("Name: (nil)");

printf("Name: %s\n",(*d).name);
printf("Age: %f\n",(*d).age);
printf("Owner: %s\n",(*d).owner);
}

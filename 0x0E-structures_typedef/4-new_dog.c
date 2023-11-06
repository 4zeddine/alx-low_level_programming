#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * Return: struct dog.
 * if fails, returns NULL.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
int i, dname, downer;

dog = malloc(sizeof(*dog));
if (dog == NULL || !(name) || !(owner))
{
free(dog);
return (NULL);
}

for (dname = 0; name[dname]; dname++)
	;

for (downer = 0; owner[downer]; downer++)
	;

dog->name = malloc(dname + 1);
dog->owner = malloc(downer + 1);

if (!(dog->name) || !(dog->owner))
{
free(dog->owner);
free(dog->name);
free(dog);
return (NULL);
}

for (i = 0; i < dname; i++)
dog->name[i] = name[i];
dog->name[i] = '\0';

dog->age = age;

for (i = 0; i < downer; i++)
dog->owner[i] = owner[i];
dog->owner[i] = '\0';

return (dog);
}

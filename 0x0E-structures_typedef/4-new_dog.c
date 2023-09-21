#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog struct and initializes its members.
 * @name: The name of the dog (string).
 * @age: The age of the dog (float).
 * @owner: The owner of the dog (string).
 *
 * Return: A pointer to the newly created dog struct, or NULL on failure.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *new_dog;

    /* Allocate memory for the new dog struct */
    new_dog = malloc(sizeof(dog_t));
    if (new_dog == NULL)
        return (NULL);

    /* Allocate memory for the name and owner strings and copy the data */
    new_dog->name = strdup(name);
    if (new_dog->name == NULL)
    {
        free(new_dog);
        return (NULL);
    }

    new_dog->age = age;

    new_dog->owner = strdup(owner);
    if (new_dog->owner == NULL)
    {
        free(new_dog->name);
        free(new_dog);
        return (NULL);
    }

    return (new_dog);
}

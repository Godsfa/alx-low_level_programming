#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees the memory allocated for a dog.
 * @d: A pointer to the dog to be freed.
 */
void free_dog(dog_t *d)
{
    if (d == NULL)
        return;

    /* Free the allocated memory for name and owner */
    free(d->name);
    free(d->owner);

    /* Free the memory for the dog struct itself */
    free(d);
}

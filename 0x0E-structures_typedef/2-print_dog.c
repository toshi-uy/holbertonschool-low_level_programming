#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - entry point
 * @d: dog parameter.
 *
 */

void print_dog(struct dog *d)
{
if (d == NULL)
exit(1);
if ((*d).name == NULL)
(*d).name = "(nil)";
if ((*d).owner == NULL)
(*d).owner = "(nil)";
printf("Name: %s\nAge: %.6f\nOwner: %s\n", (*d).name, (*d).age, (*d).owner);
}

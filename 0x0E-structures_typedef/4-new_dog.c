#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - counts strings
 * @s: parameter s
 *
 * Description: counts string characters
 *
 * Return: Count
 */

int _strlen(char *s)
{
	int count = 0;

	while (*(s + count))
	{
		count++;
	}
	return (count);
}

/**
 * _strdup - Entry point
 * @str: parameter
 *
 * Return: a pointer to a newly alloc space in memory, containing a copy of str
 *
 */

char *_strdup(char *str)
{
	int i;
	char *p;

	if (str == NULL)
		return (NULL);
	p = malloc(sizeof(char) * (_strlen(str) + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0 ; i < (_strlen(str) + 1) ; i++)
	{
		p[i] = str[i];
	}
	return (p);
}

/**
 * new_dog - Short description
 * @name: First member
 * @age: Second member
 * @owner: third memeber
 *
 * Return: Longer description
 */

dog_t *new_dog(char *name, float age, char *owner)

{
	dog_t *new_dog;
	char *name_copy;
	char *owner_copy;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	name_copy = _strdup(name);
	owner_copy = _strdup(owner);
	if (name_copy == NULL || owner_copy == NULL)
	{
		free(owner_copy);
		free(name_copy);
		free(new_dog);
		return (NULL);
	}

	new_dog->name = name_copy;
	new_dog->age = age;
	new_dog->owner = owner_copy;
	return (new_dog);
}

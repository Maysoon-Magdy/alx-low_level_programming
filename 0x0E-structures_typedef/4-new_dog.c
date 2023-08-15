#include "dog.h"
#include <stdlib>

/**
 * _strlen - return the length of the string
 * @s:string
 *
 * Return: the length
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * _strcpy - copies tht string printed
 * @dest: pointer to the destination
 * @src: source string
 *
 * Return: the dest string
 */
char *strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - creates new dog
 * @name: name
 * @age: age
 * @owner:owner
 *
 * Return: pointer to the created dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}

	_strcpy(dog->name);
	_strcpy(dog->owner);
	dog->age = age;

	return (dog);
}

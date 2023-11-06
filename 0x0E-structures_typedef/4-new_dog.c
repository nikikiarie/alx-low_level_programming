#include <stdlib.h>
#include "dog.h"
/**
 * slen - string length
 * @s: string
 * Return: string len
 */
int slen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
/**
 * scpy - copies string
 * @dest: buffer pointer
 * @src: string to copy
 * Return: pointer
 */
char *scpy(char *dest, char *src)
{
	int i, len = 0;

	while (src[len] != '\0')
		len++;
	for (i = 0; i < len; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
/**
 * new_dog - creates new dog
 * @name: name of  the dog
 * @owner: dog owner
 * @age: dog age
 * Return: new dog pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int l1, l2;

	l1 = slen(name);
	l2 = slen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (l1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (l2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	scpy(dog->name, name);
	scpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}

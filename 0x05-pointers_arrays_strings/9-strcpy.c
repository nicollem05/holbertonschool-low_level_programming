#include "holberton.h"
/**
 * _strcpy -changue the values
 * @dest: is a pointer
 * @src: is a pointer
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	char j;

	for (i = 0; src[i] != '\0'; i++)
	{
		j = src[i];
		dest[i] = j;
	}
	return (dest);
}

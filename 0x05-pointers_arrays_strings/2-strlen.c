#include "holberton.h"
/**
  * _strlen - check the code for >Holberton School students
  * @s: is a pointer
  * Return: zero
  */
int _strlen(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++);
	return (a);
}

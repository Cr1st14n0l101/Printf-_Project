#include "holberton.h"
/**
* _strlen - returns the length of a string
* @s: the pointer
* Return: returns the length of string
*/
int _strlen(char *s)
{
	int l = 0;

	for (l = 0; s[l] != '\0'; l++)
		;
	return (l);
}
/**
* _strcpy - copy a string
* @dest: the destiny
* @src: the source
* Return: the destiny
*/
char *_strcpy(char *dest, char *src)
{
	int i, n;
	int j = 0;

	for (j = 0; src[j] != 0; j++)
		;
	n = j;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

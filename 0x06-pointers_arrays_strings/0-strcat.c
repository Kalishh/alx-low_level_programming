#include "main.h"

/**
 * _strcat - function used
 * @dest: variable used
 * @src: variable used
 * Return: returns 
 */

char *_strcat(char *dest, char *src)

{
	char *temp = dest;

	for (; *temp != '\0'; temp++);
	for (; *src != '\0'; src++)
	{

		*temp = *src;
		temp++;
	}
	*temp = *src;
	return (dest);
}

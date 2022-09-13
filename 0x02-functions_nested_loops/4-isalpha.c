#include "main.h"

/**
 * _isalpha is the function used 
 * @c: The character to print
 * Return: 0 success
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}


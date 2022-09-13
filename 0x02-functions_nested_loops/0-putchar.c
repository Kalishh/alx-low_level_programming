#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: 0 Always (Success)
 */

int _putchar(char a)

{
	return (write(1, &a, 1));
}

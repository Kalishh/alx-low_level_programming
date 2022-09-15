#include "main.h"

/**
 * print_triangle - print backwards triangle of n size
 * @size: size of square
 */

void print_triangle(int size)

{

int a, b, c, d, e;

d = 1;

e = size;

if (size <= 0)

_putchar('\n');

for (b = 0; b < size; b++)

{

for (a = 0; a < (e - 1); a++)

_putchar(' ');

for (c = 0; c < d; c++)

_putchar('#');

_putchar('\n');
e--;
d++;

}

}

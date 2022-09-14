#include "main.h"

/**
 * _last_digit(int) - print last digit 
 *
 * @a: variable used
 */
int print_last_digit(int a)
{
a %= 10;
if (a < 0)
a *= -1;
a += 48;
_putchar(a);
return (a - '0');
}

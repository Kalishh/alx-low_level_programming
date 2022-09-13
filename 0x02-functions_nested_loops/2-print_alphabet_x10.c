#include "main.h"

/**
* print_alphabet_x10 - using this function
* Return; 0 (Success)
*/

void print_alphabet_x10(void)
{
char ltr = 0, ltrs;
while (ltr < 10)
{
ltrs = 'a';
	while (ltrs <= 'z')
{
	_putchar(ltrs);
	ltrs++;
}
_putchar('\n');
ltr++;
}
}

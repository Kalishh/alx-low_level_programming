#include "main.h"

/**
 * swap_int - swaps two numbers
 * @a: first variable
 * @b: second vatiable
 * @tmp: where the no is stored temporarily
 */

void swap_int(int *a, int *b)
{
	int tmp;
	
	tmp = *a;
	*a = *b;
	*b = tmp;
}

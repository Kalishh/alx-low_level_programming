#include <stdio.h>



/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)

{

	int num;


	for (num = 1; num < 100; num++)

	{
		putchar((num / 10) + '0');

		putchar((num % 10) + '0');


			if (num != 99)
		{

			putchar(',');

			putchar(' ');

		}

	}



	putchar('\n');


	return (0);

}

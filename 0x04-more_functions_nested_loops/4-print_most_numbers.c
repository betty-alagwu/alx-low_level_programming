#include "main.h"

/**
 * print_most_numbers - Prints the numbers from 0-9 except 2 amd 4.
 */
void print_most_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		if (num != 2 && num != 4)
            _putchar(num + '0');
    }

    _putchar('\n');
}

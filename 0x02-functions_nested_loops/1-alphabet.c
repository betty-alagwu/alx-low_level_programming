#include "main.h"

/**
 * main - entry point
 *
 * description - printing alphabets in small letters
 *
 * Return - Always 0.
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}

	_putchar('\n');
}

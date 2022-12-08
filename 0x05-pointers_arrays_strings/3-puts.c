#include "main.h"
#include "stdio.h"

/**
 * _puts - Print entire string
 * @str: String to be printed
 * Return: Always 0.
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}

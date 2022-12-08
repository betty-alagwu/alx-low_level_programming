#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: String whose value is to be counted
 *
 * Return: The length of @str.
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i))
	{
		i++;
	}
	return (i);
}

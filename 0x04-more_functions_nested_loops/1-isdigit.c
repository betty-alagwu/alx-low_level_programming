#include "main.h"

/**
 * _isupper - checks for a digit (0 through 9).
 * @c: The character to be checked.
 *
 * Return: 1 if character is uppercase, 0 otherwise.
 */
int _isdigit(int c)
{
if ((c >= 'A') && (c <= 'Z'))
return (1);

else
return (0);
}
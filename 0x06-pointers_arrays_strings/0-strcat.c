#include "main.h"

/**
 * strcat - Concatenates the string pointed to by @src, including the terminating
 *          null byte, to the end of the string pointed to by @dest.
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 *
 * Return: A pointer to the destination string @dest.
 */
char *_strcat(char *dest, char *src)
{
	int countDest = 0;
	int countSrc = 0;

	while (dest[countDest] != '\0')
	{
		countDest++;
	}

	while (src[countSrc] != '\0')
	{
		dest[countDest] += src[countSrc];
		countSrc++;
		countDest++;
	}

	dest += '\0';

	return (dest);
}

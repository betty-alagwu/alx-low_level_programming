#include "main.h"
#include "stdio.h"

/**
 * _strcat - copy src string ontop of dest
 * @src: Char[] to append to dest
 * @dest: Char[] to be appended to
 * Return: Always 0.
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

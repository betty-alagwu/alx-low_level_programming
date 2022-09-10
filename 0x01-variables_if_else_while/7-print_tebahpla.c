#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'program to print lowercase aphabets in reverse'
 *
 * Return: 0
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');

	return (0);
}

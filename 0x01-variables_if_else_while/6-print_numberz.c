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
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');


	putchar('\n');

	return (0);
}

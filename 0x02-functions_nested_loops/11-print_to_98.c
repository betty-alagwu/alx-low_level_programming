#include "main.h"

/**
 * print_to_98 - prints from n to 98.
 *
 * @n: The integer to be computed.
 *
 * Return: void.
 */
void print_to_98(int n)
{
    // counting from n to 98.
    if (n <= 98)
    {
        int i;
        for (i = n; i <= 98; i++)
        {
            if (i == 98)
            {
                printf("%d", i);
            }
            else
            {
                printf("%d, ", i);
            }
        }

        printf("\n");
    }
    else
    {
        int i;
        for (i = n; i >= 98; i--)
        {
            if (i == 98)
            {
                printf("%d", i);
            }
            else
            {
                printf("%d, ", i);
            }
        }

        printf("\n");
    }
}

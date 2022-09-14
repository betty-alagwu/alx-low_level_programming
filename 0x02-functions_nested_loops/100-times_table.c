#include "main.h"

/**
 * print_times_table - Prints the times table of the input,
 *
 * @n: The value of the times table to be printed.
 */
void print_times_table(int n)
{
int num, mult, r;

if (n >= 0 && n <= 15)
{
for (num = 0; num <= n; num++)
{
_putchar('0');

for (mult = 1; mult <= n; mult++)
{
_putchar(',');
_putchar(' ');

r = num * mult;

if (r <= 99)
_putchar(' ');

if (r <= 9)
_putchar(' ');

if (r >= 100)
{
_putchar((r / 100) + '0');
_putchar(((r / 10)) % 10 + '0');
}
else if (r <= 99 && r >= 10)
{
_putchar((r / 10) + '0');
}
_putchar((r % 10) + '0');
}
_putchar('\n');
}
}
}



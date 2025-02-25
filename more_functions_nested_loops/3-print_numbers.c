#include <stdio.h>
/**
 * print_numbers - prints the numbers from 0 to 9.
 */
void print_numbers(void)
{
for (int i = 0; i <= 9; i++)
{
putchar(i + '0');
}
putchar('\n');
}
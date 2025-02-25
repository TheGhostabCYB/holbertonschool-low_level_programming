#include "main.h"
/**
 * print_numbers - print numbers
 * Description: This function prints numbers from
 * 0 to 9 (excluding 2 and 4)
 * Return: void
 */
void print_numbers(void)
{
int i = 0;
for (; i < 10; i++)
{
if (i != 2 && i != 4)
{
_putchar('0' + i);
}
}
_putchar('\n');
}

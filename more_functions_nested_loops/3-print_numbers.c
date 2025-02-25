#include <stdio.h>
/**
 * print_numbers - prints a single number.
 * @n: the numbers to print.
 */
void print_numbers(int n)
{
if (n > 9)
return;  /* Base case to stop recursion */
putchar(n + '0');  /* Convert integer to character */
print_number(n + 1);  /* Recursive call for the next number */
}

#include <stdio.h>
/**
 * main - Entry point
 * Description: This program prints all possible combinations of single-digit
 *              numbers, separated by commas and spaces.
 * Return: Always 0 (Success)
 */
int main(void)
{
int i; /* Declare the integer variable */
for (i = 0; i < 10; i++) /* Loop from 0 to 9 */
{
putchar(i + '0'); /* Print the digit */
if (i < 9) /* Check if it's not the last digit */
{
putchar(','); /* Print a comma */
putchar(' '); /* Print a space */
}
}
putchar('\n'); /* Print a newline at the end */
return (0);
}

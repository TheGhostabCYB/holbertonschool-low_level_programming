#include <stdio.h>
/**
 * main - Entry point
 * Description: This program prints all the numbers of base 16 in lowercase
 *              followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
int i; /* Declare the integer variable */
for (i = 0; i < 16; i++) /* Loop from 0 to 15 */
{
if (i < 10)
{
putchar(i + '0'); /* Print numbers 0-9 */
}
else
{
putchar(i - 10 + 'a'); /* Print letters a-f */
}
}
putchar('\n'); /* Print a newline at the end */
return (0);
}

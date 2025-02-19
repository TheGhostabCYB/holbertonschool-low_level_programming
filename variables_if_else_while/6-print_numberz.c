#include <stdio.h>
/**
 * main - Entry point
 * Description: This program prints numbers from 0 to 9
 * Return: Always 0 (Success)
 */
int main(void)
{
int i; /* Declare the loop variable outside the for loop */
for (i = 0; i < 10; i++) /* Loop from 0 to 9 */
{
putchar(i + '0'); /* Convert integer to character and print */
}
putchar('\n'); /* Print a newline at the end */
return (0);
}

#include <stdio.h>
/**
 * main - Entry point
 * Description: This program displays the alphabet in reverse order
 * Return: Always 0 (Success)
 */
int main(void)
{
char char_var; /* Declare the character variable */
for (char_var = 'z'; char_var >= 'a'; char_var--) /* Loop from 'z' to 'a' */
{
putchar(char_var); /* Print the character */
}
putchar('\n');
return (0);
}

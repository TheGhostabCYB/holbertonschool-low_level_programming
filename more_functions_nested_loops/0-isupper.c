#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * main - check the code.
 * Return: Always 0.
 */
int main(void)
{
char c;
c = 'A';
printf("%c: %d\n", c, isupper(c));
c = 'a';
printf("%c: %d\n", c, isupper(c));
if (isupper(c))
printf("\nEntered character is uppercase character");
else
printf("\nEntered character is not uppercase character");
return (0);
}

#include "main.h"
/**
 * puts_half - prints the second half of a string
 * @str: pointer to the string to print
 * Return: nothing
 */
void puts_half(char *str)
{
int length = 0;
int start;
while (str[length] != '\0')
{
length++;
}
if (length % 2 == 0)
{
start = length / 2;
}
else
{
start = (length + 1) / 2;
}
while (str[start] != '\0')
{
_putchar(str[start]);
start++;
}
_putchar('\n');
}

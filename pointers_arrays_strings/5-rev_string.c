#include "main.h"
/**
 * rev_string - reverses a string
 * @s: pointer to the string to reverse
 * Return: nothing
 */
void rev_string(char *s)
{
int length = 0;
char temp;
int start, end;
while (s[length] != '\0')
{
length++;
}
start = 0;
end = length - 1;
while (start < end)
{
temp = s[start];
s[start] = s[end];
s[end] = temp;
start++;
end--;
}
}

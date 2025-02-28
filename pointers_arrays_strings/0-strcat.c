#include "main.h"
/**
 * _strcat - Concatenates two strings
 * @dest: Destination string to which src will be appended
 * @src: Source string to append to dest
 *
 * Return: Pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
char *ptr = dest;
/* Move the pointer to the end of the dest string */
while (*ptr != '\0')
{
ptr++;
}
/* Append the src string to dest */
while (*src != '\0')
{
*ptr = *src;
ptr++;
src++;
}
/* Null-terminate the concatenated string */
*ptr = '\0';
return (dest);
}

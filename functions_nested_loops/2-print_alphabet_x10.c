#include "main.h"
#include <unistd.h>
/**
 * _putchar - Writes a character to stdout
 * @c: The character to print
 * Return: On success 1, -1 on error
 */
int _putchar(char c)
{
return (0);
}
/**
 * print_alphabet - Function to print the alphabet in lowercase
 */
void print_alphabet(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
/**
 * print_alphabet_x10 - Function to print the alphabet 10 times
 */
void print_alphabet_x10(void)
{
for (int i = 0; i < 10; i++)
{
print_alphabet();
}
}
/**
 * main - Entry point of the program
 * Return: Always 0 (Success)
 */
int main(void)
{
print_alphabet_x10();
return (0);
}

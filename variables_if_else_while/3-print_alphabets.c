#include <stdio.h>

/**
 * main - Entry point
 * Description: This program displays the alphabet using putchar
 * Return: Always 0 (Success)
 */

int main(void)
{
    char char_var = 'a';
    char char_var2 = 'A';
    
    for (; char_var <= 'z'; char_var++)
    {
        putchar(char_var);
    }

    for (; char_var2 <= 'Z'; char_var2++)
    {
        putchar(char_var2);
    }

    putchar('\n');

    return (0);
}

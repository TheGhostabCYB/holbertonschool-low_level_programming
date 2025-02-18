#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
srand(time(0));
n = (rand() - RAND_MAX / 2) % 10;
if (n >= 5)
{
printf("The last digit is greater than or equal to 5\n");
}
else if (n == 0)
{
printf("The last digit is equal to 0\n");
}
else if (n < 5 && n != 0)
{
printf("The last digit is less than 5 and not equal to 0\n");
}
return (0);
}

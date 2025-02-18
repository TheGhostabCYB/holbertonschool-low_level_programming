#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point of the program
 * 
 * Return:Always 0 (Success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n >= 5)
{
printf("n is greater than or equal to 5\n");
}
else if (n == 0)
{
printf("n is equal to 0\n");
}
else if (n < 5 && n != 0)
{
printf("n is less than 5 and not equal to 0\n");
}
return 0;
}

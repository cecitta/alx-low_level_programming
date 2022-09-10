#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - print if the number is positive,negative or zero
*
* Description: using the main funtion
* this program prints "programming is positive, negative, or zero
* Return: 0
*/
main int(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
 /* your code goes there */
if (n > 0)
{
	printf("%i  is positive\n", n);
}
else if (n == 0)
{
	printf("%i is zero\n", n);
}
else if (n < 0)
{
	printf("%i is negative\n", n);
}
return (0);
}

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main-program will assign random number to variable 'n'
 * it  checks if number is positive or negative  returns the value and  status
 * return: 0 (success)
 */
int main(void)
{
	int n = 0;

	printf("Enter a number\n");

	srand(time(0));
 	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
	printf("%d is negative\n", n);
	}
	if (n > 0)
	{
	printf("%d is positive\n", n);
	}
	if (n == 0)
	{
	printf("%d is zero\n", n);
	}
	return (0);
}

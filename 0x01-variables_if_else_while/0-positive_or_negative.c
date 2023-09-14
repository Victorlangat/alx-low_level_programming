#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main-program will assign random number to variable 'n'
 * it  checks if number is positive or negative  returns the value and  status
 */
int main(void)
{
	int n = 0;

	printf("Enter a number\n");

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	scanf("%d", &n);
	if (n < 0)
	{
	printf("%d is negative", n);
	}
	if (n > 0)
	{
	printf("%d is positive", n);
	}
	if (n == 0)
	{
	printf("%d is zero", n);
	}
	return (0);
}

#include <stdio.h>
/**
 * main - Entry point
 * Description 'prints all single digit numbers of base 10 starting from 0'
 * Return : always 0 (finish)
 */
int main(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		printf("%d", a);
	}
	printf("\n");
	return (0);
}

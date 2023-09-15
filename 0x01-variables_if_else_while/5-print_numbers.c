#include <stdio.h>
/**
 * main - Entry point
 * Description 'prints all single digit numbers of base 10 starting from 0'
 * Return : always 0 (finish)
 */
int main(void)
{
	int a = 0;

	while (a >= 0 && a < 10)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}

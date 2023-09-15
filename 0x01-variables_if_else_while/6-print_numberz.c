#include <stdio.h>
/**
 * main - Entry point
 * Description: 'prints all single digits bese 10 using putchar'
 * Return: Always 0
 */
int main(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		putchar(a + 48);
	}
	putchar('\n');
	return (0);
}

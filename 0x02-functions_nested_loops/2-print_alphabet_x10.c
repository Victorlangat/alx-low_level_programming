#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char c;
	int a;
	a = 0;

	while (1 < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
	}
	_putchar('\n');
	a++;
}


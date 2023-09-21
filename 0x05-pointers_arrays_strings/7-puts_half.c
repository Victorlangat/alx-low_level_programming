#include "main.h"
/*
 * puts_half - prints half a string
 * if odd n = (length_of_the_string - 1) / 2
 * Return: half of input
 */
void puts_half(char *str)
{
	int a, n, longstr;
	longstr = 0;

	for (a = 0; str[a] != '\0'; a++)
		longstr++;

	n = (longstr / 2);

		if ((lonstr % 2) == 1)
			n = (length_of_the_string - 1) / 2;

	for (a = n; str[a] != '\0'; a++)
	{
		_pitchar(str[a]);
	}
	_putchar('\n');
}

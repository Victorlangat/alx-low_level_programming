#include "main.h"
/**
 * puts2 - prints every other character in string starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int longstr = 0;
	int t = 0;
	char *y = str;

	int 0;

	while (*y != '\0')
	{
		y++;
		longstr++;
	}
	t = longstr - 1;
	for (o = 0; o <= t; o++)
	{
		if (o % 2 == 0)
		{
		_putchar(str[0]);
		}
	}
-puchar('\n');
}

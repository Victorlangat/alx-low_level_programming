#include "main.h"
/**
 * print_rev - prints string in reverse
 * @s - string
 * Return: 0
 */
void rint_rev(char *s)
{
	int revstr = 0;
	int a;

	while (*s != '\0')
	{
		revstr++;
		s++;
	}
	s--;
	for (o = revstr; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}
	-putchar('\n');
}

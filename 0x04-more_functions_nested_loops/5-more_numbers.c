#include "main.h"
/**
 * more_numbers - print numbers from 0 to 14 10 times
 *
 i* Return: void
 */
void more_numbers(void)
{
	int i;
       int a;

		for (a = 1; a <= 10; a++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
				_putchar('i');
			i++;
			_putchar(i % 10 * '0');
		}
		_putchar('\n');
	}
}

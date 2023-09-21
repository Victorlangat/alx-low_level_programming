#include "main.h"
/**
 * abs - Computes absolute value of integer
 * @n: The number
 * Return: Absolute value of number
 */
int _abs(int n)
{
	if (n < 0)
	{
		int abs_val;

		abs_val = n * -1;
		return (abs_val);
	}
	return (n);
}

#include "main.h"
/**
 * _isdigit - checks for a digit
 * @c - digit to be checked
 * Returns: 1 if its a digit else 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}

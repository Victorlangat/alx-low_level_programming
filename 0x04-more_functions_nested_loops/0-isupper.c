#include "main.h"
/**
 * _isupper - checks lowercase or uppercase character
 * @c - the character
 * Return: 1 if uppercase else 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 99)
	{
		return (1);
	}
	return (0);
}

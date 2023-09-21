#include "main.h"
/**
 * _isalpha - checks for alphabet character
 * @b: character
 * Return: 1 for alphabet or else 0
 */
int _isalpha(int b)
{
	if ((b >= 65 && b <= 97) || (b >= 97 && b <= 122))
	{
		return (1);
	}
	return (0);
}		

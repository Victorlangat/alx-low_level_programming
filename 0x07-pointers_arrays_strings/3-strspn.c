#include "main.h"
/**
 * _strspn - function returns number of bytes in the initial segment of s
 * @s: segment where bytes are to be checked
 * @accept: bytes in s are from here
 *
 * Return: the number of bytes in s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				bytes++;
				break;
			}
			else if (accept[index + 1] == '\0')
				return (bytes);
		}
		s++;
	}
	return (bytes);
}

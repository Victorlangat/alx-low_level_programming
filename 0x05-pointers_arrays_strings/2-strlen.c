#include "main.h"
/**
 * _strlen - returns length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int longstr = 0

		while (*s != '\0')
		{
			longstr++;
			s++;
		}
	return (longstr);
}

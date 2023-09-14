#include <stdlib.h>
#include <stdio.h>
/**
 * main-entry, program prints alphabets in uppercase and lowercase
 * return always 0 (success)
 */
int main(void)
{
	char ch = 'A';

	while (ch <= 'Z')
	{
		putchar(ch);
		ch++;
	}
       	ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}



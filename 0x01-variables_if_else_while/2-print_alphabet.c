#include <stdio.h>
/**
 * main-entry point,prints the alphabet in lowercase
 * return 0 always(success)
 */
int main(void)
{
	char D = 'a';

	while (D <= 'z')
	{
		putchar(D);
		D++;
	}
	putchar('\n');
	return (0);
}

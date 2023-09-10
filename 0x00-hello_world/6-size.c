#include <stdio.h>
/**
 * int main- the sizeof  operator computes the sizes of various data types
 * the printf prints the output
 * the %zu format specifier dictates the format output will take
 */
int main(void)
{
	char charType;
	int intType;
	long longintType;
	long long longlongintType;
	float floatType;
printf("Size of char: %lu bytes\n", sizeof(charType));
printf("Size of int: %lu bytes\n", sizeof(intType));
printf("Size of long: %lu bytes\n", sizeof(longintType));
printf("Size of long long: %lu byte\n", sizeof(longlongintType));
printf("Size of float: %lu byte\n", sizeof(floatType));
return (0);
}

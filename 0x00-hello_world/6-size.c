#include <stdio.h>
/**
 * int main- the sizeof  operator computes the sizes of various data types
 * the printf prints the output and the %zu format specifier dictates the format the output will be in
 */
int main(void)
{
	char charType;
	int intType;
	long longintType;
	long long longlongintType;
	float floatType;
printf("Size of char: %zu bytes\n", sizeof(charType));
printf("Size of int: %zu bytes\n", sizeof(intType));
printf("Size of long: %zu bytes\n", sizeof(longintType));
printf("Size of long long: %zu byte\n", sizeof(longlongintType));
printf("Size of float: %zu byte\n", sizeof(floatType));
return (0);
}

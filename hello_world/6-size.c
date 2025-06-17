#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char varChar;
	int varInt;
	long int varLong;
	long long varLlong;
	float varFloat;
	printf("Size of a char: %u byte\(s\)\n", sizeof(varChar));
	printf("Size of an int: %u byte\(s\)\n", sizeof(varInt));
	printf("Size of a long int: %u byte\(s\)\n", sizeof(varLong));
	printf("Size of a long long int: %u byte\(s\)\n", sizeof(varLlong));
	printf("Size of a float: %u byte\(s\)\n", sizeof(varFloat));
	return (0);
}

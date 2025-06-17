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
	printf("Size of a char: %u bytes\n", sizeof(varChar));
	printf("Size of a int: %u bytes\n", sizeof(varInt));
	printf("Size of a long int: %u bytes\n", sizeof(varLong));
	printf("Size of a long long int: %u bytes\n", sizeof(varLlong));
	printf("Size of a float: %u bytes\n", sizeof(varFloat));
	return (0);
}

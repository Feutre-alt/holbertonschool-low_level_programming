#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always (0) (Sucess)
 */
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0)
		{
			printf("Fizz ");
		}
		if (num % 5 == 0)
		{
			printf("Buzz ");
		}
		if (num % 5 >= 0 || num % 3 >= 0)
		{
			printf("%d", num);
		}
		putchar(' ');
	}
	putchar('\n');
	return (0);
}


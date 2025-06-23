#include "main.h"
/**
 * print_most_numbers - Entry point
 *
 * Return: Always (0) (Sucess)
 */
void print_most_numbers(void)
{
	char num = '0';

	while (num < 58i)
	{
		if (num == 50 || num == 52)
		{
			num++;
		}
		else
		{
			_putchar(num);
			num++;
		}
	}
	_putchar('\n');
}

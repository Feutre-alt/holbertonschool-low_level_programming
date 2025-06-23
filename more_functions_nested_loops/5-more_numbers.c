#include "main.h"
/**
 * more_numbers - Entry point
 *
 * Return: Always (0) (Sucess)
 */
void more_numbers(void)
{
	char num1 = '0';
	char num2 = '0';
	int c, b;

	for (c = 0; c <= 9; c++)
	{
		b = 0;
		num2 = '0';
		num1 = '0';
		while (b <= 14)
		{
			if (num2 > '9')
			{
				num1 = '1';
				num2 = '0';
			}
			if (num1 == '1')
			{
				_putchar(num1);
			}
			_putchar(num2);
			num2++;
			b++;
		}
		_putchar('\n');
	}
}

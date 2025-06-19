#include "main.h"
/**
 * print_sign - Entry point
 *@n: parameter
 * Return: (1) n positive (0) n zero (-1) n negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

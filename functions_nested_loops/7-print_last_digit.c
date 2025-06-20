#include "main.h"
/**
 * print_last_digit - Entry point
 *@x: int parameter
 * Return: (x) (Sucess)
 */
int print_last_digit(int x)
{
	int r;

	if (x < 0)
	{
		x = -x;
	}
	r = x % 10;
	_putchar ('0' + r);
return (r);
}

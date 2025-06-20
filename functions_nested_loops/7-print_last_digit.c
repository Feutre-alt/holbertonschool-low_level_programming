#include "main.h"
/**
 * print_last_digit - Entry point
 *@x: int parameter
 * Return: (x) (Sucess)
 */
int print_last_digit(int x)
{
	x = x % 10;
	_putchar(x);
	return (x);
}


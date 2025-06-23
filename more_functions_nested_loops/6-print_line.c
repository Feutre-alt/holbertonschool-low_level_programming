#include "main.h"
/**
 * print_line - Entry point
 *@n: int type
 * Return: Always (0) (Sucess)
 */
void print_line(int n)
{
	int c = 1;

	while (c <= n && c > 0)
	{
		_putchar('_');
		c++;
	}
	_putchar('\n');
}

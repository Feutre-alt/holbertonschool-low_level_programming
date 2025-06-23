#include "main.h"
/**
 * print_diagonal - Entry point
 *@n: int type
 * Return: Always (0) (Sucess)
 */
void print_diagonal(int n)
{
	int b;
	int vide = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	vide = 0;
	while (vide < n)
	{
		b = 0;
		while (b < vide)
		{
			_putchar(' ');
			b++;
		}
		_putchar('\\');
		_putchar('\n');
	vide++;
	}
}

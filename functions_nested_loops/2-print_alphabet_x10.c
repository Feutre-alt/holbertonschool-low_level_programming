#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 *
 * Return: Always VOID
 */
void print_alphabet_x10(void)
{
	char x = 'a';
	int y = 0;

	while (y < 10)
	{
	x = 'a';
		while (x <= 'z')
		{
		_putchar(x);
		x++;
		}
	_putchar('\n');
	y++;
	}
}

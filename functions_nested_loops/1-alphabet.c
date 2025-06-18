#include "main.h"
/**
 * main - Entry point
 *
 * Return: void
 */
void print_alphabet(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		_putchar(x);
		x++;
	}
	_putchar('\n');
}

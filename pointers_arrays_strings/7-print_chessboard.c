#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always (0) (Sucess)
 */
void print_chessboard(char (*a)[8])
{
	unsigned int l = 0;
	unsigned int h = 0;

	while (h < 8)
	{
		l = 0;
		while(l < 8)
		{
			_putchar(a[h][l]);
			l++;
		}
		h++;
		_putchar('\n');
	}
}

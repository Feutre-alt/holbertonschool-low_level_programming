#include "main.h"
/**
 * times_table - Entry point
 *
 * Return: Always (0) (Sucess)
 */
void times_table(void)
{
	int x, a;
	int z = 10;
	int y = 0;
	int w = 0;

	for (x = 0; x <= 9; x++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (a = 1; a <= 9; a++)
		{
			y += x;
			if (y > 9)
			{
				y -= x;
				y -= z;
				w++;
			}
			if (w == 0)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('0' + w);
			}
			_putchar('0' + y);
			if (a < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		z--;
		w = 0;
		y = 0;
	}
}


#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always (0) (Sucess)
 */
void print_triangle(int size)
{
	int y, x;

	for (y = 0; y <= size; y++)
	{
		for (x = 0; x < size; x++)
		{
			if (x + y < size )
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
}

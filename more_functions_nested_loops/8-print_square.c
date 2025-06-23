#include "main.h"
/**
 * print_square - Entry point
 *@size: int type size of square
 * Return: Always (0) (Sucess)
 */
void print_square(int size)
{
	int lenght, height;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (height = 0; height < size; height++)
	{
		for (lenght = 0; lenght < size; lenght++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}

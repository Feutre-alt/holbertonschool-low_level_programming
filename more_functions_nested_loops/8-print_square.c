#include "main.h"
/**
 * main - Entry point
 *
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

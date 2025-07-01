#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 *@a: array of integer
 *@size: size of array
 * Return: Always (0) (Sucess)
 */
void print_diagsums(int *a, int size)
{
	int h = 0;
	int sum = 0;

	while (h < size * size)
	{
		sum = sum + a[h];
		h = h + size + 1;
	}
	printf("%d, ", sum);
	h = size * size - 1;
	sum = 0;
	while (h > size)
	{
		h = h - (size - 1);
		sum = sum + a[h];
	}
	printf("%d", sum);
	putchar('\n');
}

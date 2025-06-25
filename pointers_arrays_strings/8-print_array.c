#include <stdio.h>
#include "main.h"
/**
 * print_array - Entry point
 *@a: name of array
 *@n: size of array a
 * Return: Always (0) (Sucess)
 */
void print_array(int *a, int n)
{
	int taille = 0;

	if (n < 0)
	{
		n = n * (-1);
	}
	else if (n == 0)
	{
		n = 1;
	}
	while (taille != n)
	{
		printf("%d", a[taille]);
		taille++;
		if (taille != n)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
}

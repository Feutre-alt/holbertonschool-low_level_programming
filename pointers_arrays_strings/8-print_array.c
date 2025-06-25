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

	while (taille != n)
	{
		printf("%d", a[taille]);
		taille++;
		if (taille != n)
		{
			putchar(',');
		}
	}
	putchar('\n');
}

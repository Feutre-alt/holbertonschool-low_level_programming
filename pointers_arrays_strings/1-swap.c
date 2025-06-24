#include "main.h"
/**
 * swap_int - Entry point
 *@a: pointeur variable a
 *@b: pointeur variable b
 * Return: Always (0) (Sucess)
 */
void swap_int(int *a, int *b)
{
	int x = *a;

	*a = *b;
	*b = x;
}

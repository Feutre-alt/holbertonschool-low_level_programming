#include "main.h"
/**
 * reset_to_98 - Entry point
 *@*n: int type pointer
 * Return: Always (0) (Sucess)
 */
void reset_to_98(int *n)
{
	int **x = &n;
	**x = 98;
}

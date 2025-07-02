#include "main.h"
/**
 * _pow_recursion - Entry point
 *@x: int to raise
 *@y: power of x
 * Return: Always (0) (Sucess)
 */
int _pow_recursion(int x, int y)
{
	int res = 0;

	if (y > 0)
	{
		res = x * _pow_recursion(x, y - 1);
	}
	else if (y < 0)
	{
		res = -1;
	}
	else
	{
		res = 1;
	}
	return (res);
}

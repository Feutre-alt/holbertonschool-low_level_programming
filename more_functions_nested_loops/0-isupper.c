#include "main.h"
/**
 * _isupper - Entry point
 *@c: int type
 * Return: return 1 if true or 0 if false
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

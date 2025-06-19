#include "main.h"
/**
 * _isalpha - Entry point
 *@c: parameter
 * Return: (1) Sucess else (0)
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

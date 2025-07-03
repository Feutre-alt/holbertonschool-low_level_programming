#include "main.h"
/**
 * factorial - Entry point
 *@n: int
 * Return: Always (0) (Sucess)
 */
int factorial(int n)
{
	int fact = n;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	else 
	{
		fact = fact * factorial (n - 1);
	}
	return (fact);
}

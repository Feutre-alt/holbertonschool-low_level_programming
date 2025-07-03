#include "main.h"
/**
 * compteur - Entry point
 *@n: int
 *@x: int
 * Return: (compteur(n, x + 1) (Sucess) (-1) (error)
 */
int compteur(int n, int x)
{
	if (x * x == n)
	{
		return (x);
	}
	if (x * x > n)
	{
		return (-1);
	}
	return (compteur(n, x + 1));
}
/**
 * _sqrt_recursion - Entry point
 *@n: int
 * Return: (compteur(n, x + 1)) (sucess) or (-1) (error)
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (compteur(n, 0));
}

#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always (0) (Sucess)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int taille = 0;

	while (taille != n - 1)
	{
		s[taille] = b;
		taille++;
	}
	return (s);
}

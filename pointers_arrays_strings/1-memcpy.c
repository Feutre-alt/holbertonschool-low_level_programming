#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always (0) (Sucess)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int taille = 0;
	unsigned int tailleSrc = 0;

	while (taille < n)
	{
		dest[taille] = src[tailleSrc];
		taille++;
		tailleSrc++;
	}
	return (dest);
}

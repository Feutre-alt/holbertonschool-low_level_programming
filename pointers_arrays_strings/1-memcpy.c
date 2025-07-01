#include "main.h"
/**
 * *_memcpy - Entry point
 *@dest: destination array
 *@src: source array
 *@n: index of array
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

#include "main.h"
/**
 * _strncat - Entry point
 *@dest: destination string
 *@src: strings source
 *@n: number of char to add in dest
 * Return: Always (dest) (Sucess)
 */
char *_strncat(char *dest, char *src, int n)
{
	int tailleSrc = 0;
	int tailleDest = 0;

	while (dest[tailleDest] != '\0')
	{
		tailleDest++;
	}
	while (src[tailleSrc] != '\0')
	{
		while (tailleSrc < n)
		{
			dest[tailleDest] = src[tailleSrc];
			tailleSrc++;
			tailleDest++;
		}
		tailleSrc++;
	}
	return (dest);
}

#include "main.h"
/**
 * _strcat - Entry point
 *@src: source array for the concatenation
 *@dest: array were to put the source array
 * Return: Always (char) (Sucess)
 */
char *_strcat(char *dest, char *src)
{
	int tailleSrc = 0;
	int tailleDest = 0;

	while (dest[tailleDest] != '\0')
	{
		tailleDest++;
	}
	while (src[tailleSrc] != '\0')
	{
		dest[tailleDest] = src[tailleSrc];
		tailleSrc++;
		tailleDest++;
	}
	dest[tailleDest] = '\0';

	return (dest);
}


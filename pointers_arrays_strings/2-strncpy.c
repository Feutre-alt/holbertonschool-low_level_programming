#include "main.h"
/**
 * _strncpy - Entry point
 *@dest: destination string
 *@src: source string
 *@n: number of character to copy
 * Return: Always (dest) (Sucess)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int tailleDest = 0;
	int tailleSrc = 0;

	while(tailleSrc < n)
	{
		dest[tailleDest] = src[tailleSrc];
		tailleDest++;
		tailleSrc++;
	}
	return (dest);
}

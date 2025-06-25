#include "main.h"
/**
 * _strcpy - Entry point
 *@dest: array of destination
 *@src: source array
 * Return: Always (char) (Sucess)
 */
char *_strcpy(char *dest, char *src)
{
	int taille = 0;

	while (src[taille] != '\0')
	{
		dest[taille] = src[taille];
		taille++;
	}
	dest[taille] = '\0';
	return (dest);
}

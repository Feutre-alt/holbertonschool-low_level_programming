#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always (0) (Sucess)
 */
char *_strchr(char *s, char c)
{
	int taille = 0;

	while (s[taille] != '\0')
	{
		if (s[taille] == c)
		{
			return (&s[taille]);
		}
		taille++;
	}
	return (0);
}

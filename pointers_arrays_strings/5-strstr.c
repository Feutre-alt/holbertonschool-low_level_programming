#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always (0) (Sucess)
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int taille = 0;
	unsigned int tailleN;
	int flag = 0;

	while (haystack[taille] != '\0')
	{
		if (needle[tailleN] == haystack[taille] && flag == 0)
		{
			flag = 1;
			while (needle[tailleN] == haystack[taille])
			{
				taille ++;
				tailleN ++;
			}
		}
		if (flag == 1 && needle[tailleN] == '\0')
		{
			return (needle);
		}
		if (needle[tailleN] != haystack[taille] && flag == 1)
		{
			flag = 0;
			tailleN = 0;
		}
		taille++;
	}
	return (0);
}

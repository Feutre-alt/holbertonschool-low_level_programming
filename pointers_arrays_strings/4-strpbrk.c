#include "main.h"
/**
 * *_strpbrk - Entry point
 *@s: array
 *@accept: accept char
 * Return: Always (0) (Sucess)
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int ia = 0;

	while (s[i] != '\0')
	{
		ia = 0;
		while (accept[ia] != '\0')
		{
			if (s[i] == accept[ia])
			{
				return (&s[i]);
			}
			ia++;
		}
		i++;
	}
	return (0);
}

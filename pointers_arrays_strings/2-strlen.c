#include "main.h"
/**
 * _strlen - Entry point
 *@s: name of array
 * Return: always (compte) (Sucess)
 */
int _strlen(char *s)
{
	int compte = 0;

	while (s[compte] != 0)
	{
		compte++;
	}
	return (compte);
}

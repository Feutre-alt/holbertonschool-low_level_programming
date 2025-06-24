#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always (0) (Sucess)
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

#include "main.h"
/**
 * puts2 - Entry point
 *@str: array name
 * Return: Always (0) (Sucess)
 */
void puts2(char *str)
{
	int taille = 0;

	while (str[taille] != '\0')
	{
		if (taille % 2 == 0)
		{
			_putchar(str[taille]);
		}
		taille++;
	}
	_putchar('\n');
}

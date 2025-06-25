#include "main.h"
/**
 * puts_half - Entry point
 *@str: name of array
 * Return: Always (0) (Sucess)
 */
void puts_half(char *str)
{
	int taille = 0;

	while (str[taille] != '\0')
	{
		taille++;
	}
	if (taille % 2 == 0)
	{
		taille = taille / 2;
	}
	else
	{
		taille = taille / 2 + 1;
	}
	while (str[taille] != '\0')
	{
		_putchar(str[taille]);
		taille++;
	}
	_putchar('\n');
}

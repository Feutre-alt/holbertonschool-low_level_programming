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
	taille = taille / 2;
	while (str[taille] != '\0')
	{
		_putchar(str[taille]);
		taille++;
	}
	_putchar('\n');
}

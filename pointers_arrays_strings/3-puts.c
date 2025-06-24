#include "main.h"
/**
 * _puts - Entry point
 *@str: Array name
 * Return: Always (0) (Sucess)
 */
void _puts(char *str)
{
	int taille_table = 0;

	while (str[taille_table] != '\0')
	{
		_putchar(str[taille_table]);
		taille_table++;
	}
	_putchar('\n');
}


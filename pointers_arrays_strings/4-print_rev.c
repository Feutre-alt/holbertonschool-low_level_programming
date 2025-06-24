#include "main.h"
/**
 * print_rev- Entry point
 *@s: array name
 * Return: Always (0) (Sucess)
 */
void print_rev(char *s)
{
	int taille_table = 0;

	while (s[taille_table] != '\0')
	{
		taille_table++;
	}
	while (taille_table >= 0)
	{
		_putchar(s[taille_table]);
		taille_table--;
	}
	_putchar('\n');
}

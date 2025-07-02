#include "main.h"
/**
 * _print_rev_recursion - Entry point
 *@s: array of char
 * Return: Always (0) (Sucess)
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
	return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}

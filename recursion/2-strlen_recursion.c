#include "main.h"
/**
 * _strlen_recursion - Entry point
 *@s: array of char
 * Return: Always (0) (Sucess)
 */
int _strlen_recursion(char *s)
{
	int len = 1;

	if (*s != '\0')
	{
		len = len + _strlen_recursion(s + 1);
	}
	else
	{
		len = 0;
	}
	return (len);
}

#include "main.h"
/**
 * main - Entry point
 *
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

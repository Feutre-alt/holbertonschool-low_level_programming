#include "main.h"
/**
 * int _isupper(int c) - Entry point
 *@c: int type
 * Return: int
 */
int _isupper(int c)
{		
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{	
		return(0);
	}
}

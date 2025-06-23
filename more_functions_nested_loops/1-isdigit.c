#include <stdio.h>
/**
 * _isdigit - main entry
 *@c: int type
 * Return:(1) (Sucess)
 */
int _isdigit(int c)
{
	if (c < 58 && c > 47)
	{
		return (1);

	}
	else
	{
		return (0);
	}
}

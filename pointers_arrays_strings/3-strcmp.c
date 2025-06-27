#include "main.h"
/**
 * _strcmp - Entry point
 *@s1: first array
 *@s2: second array
 * Return: Always (0) (Sucess)
 */
int _strcmp(char *s1, char *s2)
{
	int result = s1[0] - s2[0];
	int i = 0;
	int i2 = 0;

	while (s1[i] != '\0' || s2[i2] != '\0')
	{
		result = s1[i] - s2[i2];
		if (result != 0)
		{
			break;
		}
		else
		{
			i++;
			i2++;
		}
	}

	return (result);
}

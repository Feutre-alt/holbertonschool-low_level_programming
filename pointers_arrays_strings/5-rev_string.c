#include "main.h"
/**
 * rev_string - Entry point
 *@s: string type
 * Return: Always (0) (Sucess)
 */
void rev_string(char *s)
{
	int start = 0;
	int end = 0;
	char tmp;

	while (s[end] != '\0')
	{
		end++;
	}
	end--;
	for (start = 0; start < end; start++)
	{
		tmp = s[start];
		s[start] = s[end];
		s[end] = tmp;
		end--;
	}
}

#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always (0) (Sucess)
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar (letter);
		letter++;

	}
	putchar ('\n');
	return (0);
}


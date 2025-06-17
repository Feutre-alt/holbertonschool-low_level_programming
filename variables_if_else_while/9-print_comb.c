#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always (0) (Sucess)
 */
int main(void)
{
	char num = 48;

	while (num <= 57)
	{
		putchar (num);
		num++;
		if (num > 57)
		{
			putchar('\n');
		}
		else
		{
			putchar(',');
			putchar(' ');
		}
		continue;
	}
	return (0);
}


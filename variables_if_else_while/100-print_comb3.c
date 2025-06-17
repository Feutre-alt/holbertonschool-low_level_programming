#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always (0) (Sucess)
 */
int main(void)
{
	int varNum1 = 0;
	int varNum2 = 1;
	int varBase = 9;
	int varCtr = varBase;
	int varDctr = 1;

	while (varDctr != 10)
	{
			if (varCtr != 0)
			{
				putchar('0' + varNum1);
				putchar('0' + varNum2);
				varNum2++;
				varCtr--;
				if (varDctr != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
			else
			{
				varBase--;
				varCtr = varBase;
				varDctr++;
				varNum1++;
				varNum2 = 10 - varBase;

			}
	}
	putchar('\n');
	return (0);
}


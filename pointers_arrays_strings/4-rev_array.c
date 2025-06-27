#include "main.h"
/**
 * reverse_array - Entry point
 *@a: array of int
 *@n: number of element in the array
 * Return: Always (0) (Sucess)
 */
void reverse_array(int *a, int n)
{
	int end = 0;
	int start = 0;
	int tmp = 0;

	while (end != n)
	{
		end++;
	}
	end--;
	while (end != start)
	{
		if (n <= 0)
		{
			break;
		}
		tmp = a[end];
		a[end] = a[start];
		a[start] = tmp;
		end--;
		start++;
	}
}

#include "main.h"

void print_diagonal(int n)
{
	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = i-1; j > 0; j--)
			{
				_putchar(' ');
			}
			_putchar('\\');
		}
		if (i == n-1)
		{
			continue;
		}
	}
}

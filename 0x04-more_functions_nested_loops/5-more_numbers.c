#include "main.h"


void more_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		for (j = 48; j < 58; j++)
		{
			_putchar(j);
		}
		for(k = 48; k < 53; k++)
		{
			_putchar(49);
			_putchar(k);
		}
	}
}

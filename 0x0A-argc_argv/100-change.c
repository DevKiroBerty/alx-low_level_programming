#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints minimum number coins to make change for an amount of money.
 * @argc: number of arguments
 * @argv: array with the arguments
 *
 * Return: always 0
 **/

int main(int argc, char* argv[])
{
	char c[] = "Error";
	int value = atoi(argv[1]);
	int coins = 0;

	if (argc != 2)
	{
		printf("%s\n", c);
		return(1);
	}
	else
	{
		while (value > 0)
		{
			if (value >= 25)
				value -= 25;
			else if (value >= 10)
				value -= 10;
			else if (value >= 5)
                                value -= 5;
			else if (value >= 2)
                                value -= 2;
			else
				value -=1;
			coins++;
		}
		printf("%d\n", coins);
		return (0);
	}
}

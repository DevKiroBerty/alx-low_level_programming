#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - prints every 2 number combination.
 *
 * Return: 0 on success
 */
int main(void)
{
int n, m;

for (n = '0'; n < '9'; n++)
{
for (m = n + 1; m <= '9'; m++)
{
putchar(n);
putchar(m);
if (n != '8' && m != '9')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
}
return (0);
}

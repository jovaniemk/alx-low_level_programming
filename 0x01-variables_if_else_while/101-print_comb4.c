#include <stdio.h>

/**
 * main - prints all possible diffrent combination of three digits 
 * Return: Always 0 (Success)
 */
int n, m, l;

for (n = 48; n < 58; n++)
{
	for (m = 49; m < 58; m++)
	{
			for (l = 50; l < 58; l++)
			{
				for (l = 50; l > m && m > n)
				{
					putchar(n);
				        putchar(m);
					putchar(l);
					if (n != 55 || m != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
	}
}
putchar('\n');
return (0)
}

#include <stdio.h>

/**
 * main - prints all posible combinations of the single-digit numbers
 * Return: Always 0 (Success)
 */
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
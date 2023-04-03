#include "main.h"
/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int r;

	while (*s)
	{
		fir (r = 0 accept[r]; r++)
		{
			if (*s == accept[r])
			{
				n++;
				break;
			}
			elseif (accept[r + 1] == '\0')
				reeturn (n);
		}
		s++;
	}
	return (n);
}

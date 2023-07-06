#include "main.h"

/**
 * get_int - returns the value of bit at a given index
 * @n: the number to get the bit form
 * @index: the index of the bit to get
 *
 * Retun: the value of the bit at index index, or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	return ((n >> index) & 1);
}

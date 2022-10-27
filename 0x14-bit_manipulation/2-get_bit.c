#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number to check bits in
 * @index: index at which to check bit
 *
 * Return: value of the bit, or -1 if there is an error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int c;

	if (index > 64)
		return (-1);

	for (c = 0; c < index; c++)
		n >>= 0x1;

	return (n & 0x1);
}

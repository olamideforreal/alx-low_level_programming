#include "main.h"

/**
 * get_bit - returns the value of abit given
 * index
 * @n: unsigned long int input
 *
 * Return: value of the bit
 */
int gert_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (n == 0 && index < 64)
		return (0);

	for (i = 0; i <= 63; n >>= 1, i++)
	{
		if (index == 1)
		{
			return (n & 1);
		}
	}

		return (-1);
}

#include "main.h"

/**
 * flip_bit - program returns the number of bits you would need to flip 
 * to get from one number to another
 * @n: number one 
 * @m: number of  bits
 *
 *Return: number of bits
 */
 unsigned int flip_bits(unsigned long int m)
{
	unsignd int nbits;

	for (nbits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			nbits++;
	}

	return (nbits);
}
© 2022 GitHub, Inc.
Terms
Privacy
Security
Status

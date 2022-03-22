#include "amin.h"
#include <stdio.h>

/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte to the buffer
 * pointed to by dest
 * where dest is destination
 */

char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count>= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
			break;
		count++;
	}
	return (dest);
}
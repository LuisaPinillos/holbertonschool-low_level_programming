#include "main.h"

/**
 * binary_to_uint - function that converts a binary
 * number to an unsigned int
 * @b: pointer to string
 * Return: decimal
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;
	unsigned int i = 0;

	if (b != NULL)
	{
		while (b[i] != '\0')
		{
			if (b[i] != '1' && b[i] != '0')
			{
				return (0);
			}
			dec <<= 1;
			dec += b[i] - '0';
			i++;
		}
		return (dec);
	}
	return (0);
}

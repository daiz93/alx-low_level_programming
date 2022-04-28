#include "main.h"

/**
 * get_bit - function that returns the value of a bit
 * at a given index.
 * @n: binarry to convert
 * @index: index to read
 *
 * Return: return bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
        unsigned long int bit;

        if (index > 64)
                return (-1);

        bit = n >> index;

        return (bit & 0x1);
}
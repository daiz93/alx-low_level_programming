#include "main.h"

/**
 * flip_bits - function that returns the number of bits
 * you would need to flip to get from one number to another.
 * @n: n
 * @m: m
 *
 * Return: int
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
        unsigned int flip_bit = 0, comp, comp1;

        while (!(n == 0 && m == 0))
        {
                comp = n & 1;
                comp1 = m & 1;
                n = n >> 1;
                m = m >> 1;
                if (comp != comp1)
                        flip_bit += 1;
        }
        return (flip_bit);
}
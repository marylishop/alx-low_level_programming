#include "main.h"

/**
 * flip_bits - returns the number of bits needed to flip to get from n to m
 * @n: first number
 * @m: second number
 * Return: number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int difference = n ^ m;
unsigned int count = 0;

while (difference != 0)
{
if ((difference & 1) == 1)
count++;
difference = difference >> 1;
}
return (count);
}

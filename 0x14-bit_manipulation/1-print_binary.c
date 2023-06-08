#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to print in binary
 */
void print_binary(unsigned long int n)
{
int i, bit_Count = 0;
unsigned long int current;

for (i = 63; i >= 0; i--)
{
current = n >> i;

if (current & 1)
{
_putchar('1');
bit_Count++;
}
else if (bit_Count)
_putchar('0');
}
if (!bit_Count)
_putchar('0');
}

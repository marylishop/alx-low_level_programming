#include "main.h"
#include <stdlib.h>
/**
* clear_bit - sets the value of a bit to 0 at a given get_nodeint_at_index
* @n: pointer to the number
* @index: get_nodeint_at_index
* Return: 1 if works, -1 if error
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > sizeof(n) * 8)
return (-1);
*n &= ~(1  << index);
return (1);
}

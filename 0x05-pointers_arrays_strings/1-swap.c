#include <stdio.h>

/**
 * swap_int - swaps the values of the two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
/* the function that swaps the values of two integers. */
{
int temp = *a;
*a = *b;
*b = temp;
}

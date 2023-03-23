#include "main.h"
/**
 * _isdigit - checks for digits 0 - 9
 * @c - character to be checked
 *
 * Return : 1 if it is a digit and 0 otherwise
 */

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}
}

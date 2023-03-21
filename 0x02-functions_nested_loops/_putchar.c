#include "main.h"
#include <uistd.h>

/**
 * _putchar - writes che character c to stdout
 * @c : the character to print
 * Return : 1 On success
 */

int _puchar(char c)
{       
return (write(1, &c, 1));
} 

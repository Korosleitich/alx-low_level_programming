#include <stdio.h>

/**
 * _strlen - retuns the length
 * @str: string to get the length
 *
 */

size_t _strlen(const char *str)
{
size_t length = 0;
while (*str++)
length++;
return (length);
}

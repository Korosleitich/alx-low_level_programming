#include "main.h"

/**
 * _strncpy - Copies characters from the string pointed.
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 * @n: The maximum number of bytes copied from src.
 * Return : A pointer to the destination array.
 */

char *_strncpy(char *dest, char *src, int n)
{
int index = 0, src_len = 0;
while (src[src_len])
src_len++;
for (index = 0; src[index] && index < n; index++)
dest[index] = src[index];
for (index = src_len; index < n; index++)
dest[index] = '\0';
return (dest);
}

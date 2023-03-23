#include "main.h"
#include <unistd.h>
/**
 * -putchar - writes a character  c to standard output
 *  @c : The character to print
 *
 *  Return: on success 1
 *  On error , -1 is returned and error is set appropriately
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}

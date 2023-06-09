#include "function_pointers.h"

/**
 * print_name - Prints a name
 * @name: name to be printed
 * @f: A pointer
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}

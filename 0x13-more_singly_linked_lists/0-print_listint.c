#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t
 * @h: listint_t to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t hez = 0;

while (h)
{
printf("%d\n", h->n);
hez++;
h = h->next;
}

return (hez);
}
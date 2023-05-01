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
const listint_t *koros = h;
while (koros != NULL)
{
printf("%d\n", koros->n);
koros = koros->next;
hez++;
}

return (hez);
}

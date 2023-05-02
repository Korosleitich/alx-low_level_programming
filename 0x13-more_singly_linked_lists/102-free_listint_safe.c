#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
 listint_t *function = head;
 listint_t *koros = head;

 if (!head)
 return (NULL);

 while (function && koros && koros->next)
 {
 koros = koros->next->next;
 function = function->next;
 if (koros == function)
 {
 function = head;
 while (function != koros)
 {
 koros = koros->next;
 function = function->next;
 }
 return (koros);
 }
 }

 return (NULL);
}

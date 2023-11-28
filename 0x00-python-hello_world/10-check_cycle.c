#include "lists.h"

/**
 * check_cycle - checks if a singly linked list has a cycle in it
 * @list: linked list to check
 *
 * Return: 0 if there is no cycle, 1 if there is a cycle
 */
int check_cycle(listint_t *list)
{
	listint_t *normal = list;
	listint_t *best = list;

	if (!list)
		return (0);

	while (normal && best && best->next)
	{
		normal = normal->next;
		best = best->next->next;
		if (normal == best)
			return (1);
	}

	return (0);
}

#include "lists.h"

/**
 * dlistint_len - short description
 * Description: long description
 * @h: double linked list pointer
 * Return: return description
 */
size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *current;
	size_t tally;

	current = (dlistint_t *) h;
	tally = 0;
	while (current)
	{
		tally++;
		current = current->next;
	}
	return (tally);
}

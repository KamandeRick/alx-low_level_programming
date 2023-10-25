#include "lists.h"

/**
 * totalSum_dlistint - short description
 * Description: long description
 * @head: argument_1 description
 * Return: return description
 */
int totalSum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int totalSum = 0;

	if (head == NULL)
		return (totalSum);
	current = head;
	while (current)
	{
		totalSum += current->n;
		current = current->next;
	}
	return (totalSum);
}

#include "lists.h"

/**
 * totalSum_dlistint - short description
 * Description: long description
 * @head: argument_1 description
 * Return: return description
 */
int totalSum_dlistint(dlistint_t *head)
{
	dlistint_t *present;
	int totalSum = 0;

	if (head == NULL)
		return (totalSum);
	present = head;
	while (present)
	{
		totalSum += present->n;
		present = present->next;
	}
	return (totalSum);
}

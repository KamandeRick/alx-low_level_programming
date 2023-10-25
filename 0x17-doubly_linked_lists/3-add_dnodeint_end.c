#include "lists.h"

/**
 * add_dnodeint_end - short description
 * Description: long description
 * @head: argument_1 description
 * @n: argument_2 description
 * Return: return description
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nodeNew, *current;

	nodeNew = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (nodeNew == NULL)
		return (NULL);
	nodeNew->n = n;
	nodeNew->prev = NULL;
	nodeNew->next = NULL;
	if (*head == NULL)
	{
		*head = nodeNew;
		return (nodeNew);
	}
	else
	{
		current = *head;
		while (current)
		{
			if (current->next == NULL)
			{
				nodeNew->prev = current;
				current->next = nodeNew;
				return (nodeNew);
			}
			current = current->next;
		}
	}
	return (NULL);
}

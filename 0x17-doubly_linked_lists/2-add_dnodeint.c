#include "lists.h"

/**
 * add_dnodeint - short description
 * Description: long description
 * @head: argument_1 description
 * @n: argument_2 description
 * Return: return description
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nodeNew;

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
		nodeNew->next = *head;
		(*head)->prev = nodeNew;
		*head = nodeNew;
		return (nodeNew);
	}
}

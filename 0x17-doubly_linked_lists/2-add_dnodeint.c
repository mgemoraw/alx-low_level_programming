#include "lists.h"

/**
* add_dnodeint - adds node at the begining
* @head: pointer to head of the list
* @n: data to be added
* Return: returns the head of the list
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp, *newNode;

	/*temp = malloc(sizeof(dlistint_t)); */
	newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->prev = NULL;
	newNode->n = n;
	newNode->next = NULL;

	temp = *head;
	if (temp != NULL)
	{
		while (temp->prev != NULL)
			temp = temp->prev;
	}

	newNode->next = temp;
	if (temp != NULL)
		temp->prev = newNode;

	*head = newNode;
	return (newNode);
}

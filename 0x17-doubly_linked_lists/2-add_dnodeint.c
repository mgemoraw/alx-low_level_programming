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

	temp = malloc(sizeof(dlistint_t));
	newNode = malloc(sizeof(dlistint_t));


	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (*head);
	}

	temp = *head;
	*head = newNode;

	temp->prev = newNode;

	newNode->next = temp;

	
	return (newNode);
}

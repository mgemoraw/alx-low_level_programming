#include "lists.h"
/**
* free_dlistint - frees the linked list
* @head: head of the list
* Return: returns nothing
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = malloc(sizeof(dlistint_t));

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;
	}
	while ((temp = head) != NULL)
	{
		head = head->next;
		/*head->prev = NULL; */
		free(temp); /* free current head */
	}
}

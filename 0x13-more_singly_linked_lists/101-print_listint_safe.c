#include "lists.h"

/**
 * print_listint_safe - prints a linked list
 * @head: linked list
 * Return: lenber of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t len = 0;
	long int ex;

	while (head)
	{
		ex = head - head->next;
		len++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (ex > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next);
			break;
		}
	}

	return (len);
}

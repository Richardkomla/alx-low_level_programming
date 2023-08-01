#include "lists.h"

/**
 * print_listint_safe - A function that prints the elementsin a  list
 * @head: A pointer to listint_t structure
 * Return: The number of nodes. Exits with 98 on failure
 */
int _check_and_print(const listint_t *head, listint_safe *prev)
{
	listint_safe node, *tmp;

	if (head->next == NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		return (1);
	}

	node.next = prev;
	node.addy = head;
	tmp = node.next;
	while (tmp != NULL && tmp->addy != head)
		tmp = tmp->next;
	if (tmp != NULL)
	{
		printf("-> [%p] %d\n", (void *)head, head->n);
		return (0);
	}

	printf("[%p] %d\n", (void *)head, head->n);

	return (1 + _check_and_print(head->next, &node));
}

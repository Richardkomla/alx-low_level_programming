#include "lists.h"
/**
 * _check_and_print - Check the list and print
 * @head: of newlist to check
 * @prev: node on list to check
 *
 * Return: number of nodes
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

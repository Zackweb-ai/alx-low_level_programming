#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node in
 * a linked list at a given position.
 * @head: A pointer to the pointer of the first node in the list.
 * @idx: The index where the new node is added (starting from 0).
 * @n: The data to insert in the new node.
 * Return: A pointer to the new node if successful, otherwise NULL.
 * Description: This function inserts a new node with the specified data at the
 * specified index in the linked list. If the index is 0, the new node becomes
 * the new head. If the index is out of range or memory
 * allocation fails, it returns NULL.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}

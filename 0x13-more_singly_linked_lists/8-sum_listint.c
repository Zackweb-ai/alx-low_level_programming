#include "lists.h"

/**
 * sum_listint - Calculates the sum of all the data in a listint_t linked list.
 * @head: A pointer to the first node in the linked list.
 * Return: The resulting sum of all the data, or 0 if the list is empty.
 * Description: This function traverses the linked list,
 * summing up the 'n' values
 * of each node and returning the total sum.
 * If the list is empty, it returns 0.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}

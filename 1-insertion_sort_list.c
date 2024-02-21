#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm
 * @list: Double pointer to the head of the linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *prev;
	/* Check if list is NULL or has less than 2 nodes */
	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	current = (*list)->next;  /* Start from the second node */
	/* Traverse the list */
	while (current != NULL)
	{
		prev = current->prev;  /* Initialize prev to current's previous node */
		/* Inner loop for insertion */
		while (prev != NULL && prev->n > current->n)
		{
			/* Swap nodes */
			if (prev->prev != NULL)
				prev->prev->next = current;
			current->prev = prev->prev;
			prev->next = current->next;
			if (current->next != NULL)
				current->next->prev = prev;
			current->next = prev;
			prev->prev = current;
			if (prev == *list)
				*list = current;  /* Update list pointer if prev is the head */
			/* Print the list after each swap */
			print_list(*list);
			prev = current->prev;  /* Move prev backwards */
		}
		current = current->next;  /* Move current forwards */
	}
}

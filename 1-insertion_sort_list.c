#include "sort.h"

/**
 * swap_node - takes in nodes and swap them
 * @list: head pointer of linked list
 * @value: pointer to first node for swap
 * @front: pointer to second node for swap
 */

void swap_node(listint_t **list, listint_t **value, listint_t *current)
{
	if (current->next != NULL)
                current->next->prev = *value;
        (*value)->next = current->next;
        current->prev = (*value)->prev;
        current->next = *value;
        if ((*value)->prev != NULL)
                (*value)->prev->next = current;
        else
                *list = current;
        (*value)->prev = current;
	*value = current->prev;
}

void insertion_sort_list(listint_t **list)
{
	listint_t *value, *current, *tmp;

	if(list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	
	for (current = (*list)->next; current != NULL; current = tmp)
	{
		tmp = current->next;
		value = current->prev;
		while (value != NULL && current->n < value->n)
		{
			swap_node(list, &value, current);
			print_list((const listint_t *)*list);
		}
	}
}

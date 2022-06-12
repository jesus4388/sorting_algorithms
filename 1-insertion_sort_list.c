#include "sort.h"
/**
 * insertion_sort_list - insertion sort list
 * @list: list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *aux = NULL;
	listint_t *aux2 = NULL;

	if (list == NULL || *list == NULL)
		return;

	aux = *list;
	while (aux !=  NULL)
	{
		while ((aux->prev) && (aux->n < aux->prev->n))
		{
			aux2 = aux->prev;
			if (aux2->prev)
				aux2->prev->next = aux;
			aux->prev = aux2->prev;
			if (aux->next)
				aux->next->prev = aux2;
			aux2->next = aux->next;
			aux2->prev = aux;
			aux->next = aux2;
			if (aux->prev == NULL)
				*list = aux;
			print_list(*list);
		}
		aux = aux->next;
	}
}

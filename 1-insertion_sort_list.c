#include "sort.h"
/**
 * insertion_sort_list - insertion sort list
 * @list: list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *aux = *list;
	listint_t *aux2 = *list;

	if (*list == NULL)
		aux = NULL;

	while (aux)
	{
		while ((aux->prev) && (aux->n < aux->prev->n))
		{
			aux2 = aux->prev;
			if (aux2->prev)
			{
				aux2->prev->next = aux;
				aux->prev = aux2->prev;
			}
			else
				aux->prev = NULL;
			if (aux->next)
			{
				aux2->next = aux->next;
				aux->next->prev = aux2;
			}
			else
				aux2->next = NULL;
			aux2->prev = aux;
			aux->next = aux2;
			if (aux->prev == NULL)
				*list = aux;
			print_list(*list);
		}
		aux = aux->next;
	}
}

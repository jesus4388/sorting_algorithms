#include "sort.h"
/**
 * insertion_sort_list - insertion sort list
 * @list: list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *aux = *list;
	listint_t *aux2 = *list;

	aux = aux->next;
	while (aux)
	{
		while ((aux->n < aux->prev->n) && aux)
		{
			aux2 = aux->prev;
			if (aux2->prev)
				aux2->prev->next = aux;
			aux2->next = aux->next;
			if (aux->next)
				aux->next->prev = aux2;
			aux->prev = aux2->prev;
			aux2->prev = aux;
			aux->next = aux2;
			if (aux->prev == NULL)
			{
				*list = aux;
				aux = aux->next;
			}
			print_list(*list);
		}
		aux = aux->next;
	}
}

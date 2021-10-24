#ifndef _SORT_
#define _SORT_

// import libraries

#include<stdlib.h>


/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer
 * @nxt: Pointer to the next element of the list.
 * @prev: Pointer to the previous element of the list.
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;


// Prototypes
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);

#endif
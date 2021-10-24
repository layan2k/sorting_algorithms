#ifndef _SORT_
#define _SORT_

// import libraries

#include<stdlib.h>
#include<stdio.h>

/**
 * struct listint_dub - Doubly linked list node
 *
 * @n: Integer
 * @nxt: Pointer to the next element of the list.
 * @prv: Pointer to the previous element of the list.
 */
typedef struct listint_dub
{
	const int n;
	struct listint_dub *prv;
	struct listint_dub *nxt;
} listint_t;


// Prototypes
void bubble_sort(int *array, size_t size);

#endif
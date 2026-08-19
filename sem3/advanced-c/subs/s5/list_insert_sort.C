#include <stdio.h>
#include <malloc.h>

typedef struct element
{
	char data;
	struct element* ptr_next;
} element;

void insert_in_sort_list(char x, element** plist);
element* build_sort_list();
void reverse_list(element** pl);
void print_list(element* list);
void free_list(element* list);


void main()
{
	element* lst;
	printf("Enter list elements: ");
	lst = build_sort_list();
	printf("Sorted list: ");
	print_list(lst);
	printf("\n");
	reverse_list(&lst);
	printf("Reversed list: ");
	print_list(lst);
	printf("\n");
	free_list(lst);
}


void insert_in_sort_list(char x, element** plist)
{
	element* curr_point = *plist, *prev_point = NULL, *temp=NULL;

	while (curr_point && (x > curr_point->data)) //search of place for insertion
	{
		prev_point = curr_point;
		curr_point = curr_point->ptr_next;
	}

	temp = (element*)malloc(sizeof(element));
	temp->data = x;

	if (curr_point != *plist) // inserting in the middle or in the end
	{
		prev_point->ptr_next = temp;
		temp->ptr_next = curr_point;		
	}
	else  // inserting before first element
	{
		temp->ptr_next = *plist;
		*plist = temp;
	}
}


element* build_sort_list()
{
	element* lst = NULL;
	char c;

	while ((c = getchar()) != '\n') {
		insert_in_sort_list(c, &lst);
		rewind(stdin);
	}
	return lst;
}


void reverse_list(element** pl)
{
	element *curr=NULL, *prev=NULL, *temp=NULL;

	curr = *pl;
	prev = NULL;
	while (curr)
	{
		temp = curr->ptr_next;
		curr->ptr_next = prev;
		prev = curr;
		curr = temp;
	}
	*pl = prev;
}


void print_list(element* lst)
{
	while (lst)
	{
		printf("%c->", lst->data);
		lst = lst->ptr_next;
	}
	printf("NULL\n");
}


void free_list(element* lst)
{
	element* temp;

	while (lst)
	{
		temp = lst;
		lst = lst->ptr_next;
		free(temp);
	}
}


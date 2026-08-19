#ifndef LINKED_LIST_H_
#define LINKED_LIST_H_

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} Node;

Node *node_create_new(int value,Node*);
Node* linked_list_insert_start(Node *list_head, int value);
void linked_list_insert_start_ref(Node **list, int value);
int linked_list_insert_end(Node *list_head, int value);
Node* linked_list_insert_index(Node *list_head, int index, int value);
void linked_list_print(Node *list_head);
Node* linked_list_from_array(int *array,int size);
void linked_list_del_first(Node**lst);
void linked_list_del_last(Node**lst);
#endif
#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

Node *node_create_new(int value, Node *next)
{
    Node *new_n = (Node *)malloc(sizeof(Node));
    new_n->next = next;
    new_n->data = value;
    return new_n;
}

Node *linked_list_insert_start(Node *list_head, int value)
{
    Node *new_n = node_create_new(value, list_head);
    printf("h: %p nh:%p",list_head,new_n);
    return new_n;
}
int linked_list_insert_end(Node *list_head, int value)
{
    Node *new_n = node_create_new(value, NULL);
    Node *list_tail = list_head;
    while (list_tail->next != NULL)
    {
        list_tail = list_tail->next;
    }
    list_tail->next = new_n;
    return 1;
}
int linked_list_insert_index(Node *list_head, int index, int value)
{
    if (index == 0)
    {
        return linked_list_insert_start(list_head, value);
    }
    int counter = 0;
    Node *n_ptr = list_head;
    while (counter < index - 1)
    {
        if (n_ptr->next == NULL)
        {
            return 0;
        }
        n_ptr++;
        counter++;
    }
    Node *post_insert = n_ptr->next;
    n_ptr->next = node_create_new(value, post_insert);
    return 0;
}

void linked_list_print(Node *head)
{
    if (head == NULL)
    {
        printf("List Empty");
        return;
    }
    Node *ptr = head;
    int counter = 0;
    while (ptr!= NULL)
    {
        printf("[%i]:%i", counter, ptr->data), counter++;
        counter++;
        ptr = ptr->next;
    }
    printf(" NULL\n");
}
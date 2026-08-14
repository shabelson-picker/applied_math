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
    // printf("h: %p nh:%p",list_head,new_n);
    return new_n;
}
void linked_list_insert_start_ref(Node **list, int value)
{
    Node *new_n = node_create_new(value, *list);
    *list = new_n;
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
Node* linked_list_insert_index(Node *list_head, int index, int value)
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
    return list_head;
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
    while (ptr != NULL)
    {
        printf("[%d]:%d-> ", counter, ptr->data);
        counter++;
        ptr = ptr->next;
    }
    printf(" NULL\n");
}
Node *linked_list_from_array(int *array, int size)
{
    if (size < 1)
        return NULL;
    Node *head = node_create_new(array[0], NULL);
    Node *ptr = head;
    for (int i = 1; i < size; i++)
    {
        Node *new_n = node_create_new(array[i], NULL);
        ptr->next = new_n;
        ptr = ptr->next;
    }
    return head;
}

void linked_list_del_first(Node **lst)
{
    if (lst == NULL)
        return;
    printf("pre ptr head %p\n", *lst);
    Node *ptr = (*lst)->next;

    free(*lst);
    *lst = ptr;
    printf("post> ptr head %p", *lst);
}

void linked_list_del_last(Node **lst)
{
    if (lst == NULL)
        return;
    if ((*lst)->next == NULL)
    {
        free(*lst);
        lst = NULL;
    }
    Node *ptr_prev = (*lst);
    Node *ptr_last = ptr_prev->next;
    while (ptr_last->next != NULL)
    {
        ptr_prev = ptr_last;
        ptr_last = ptr_last->next;
    }
    ptr_prev->next = NULL;
    free(ptr_last);
}
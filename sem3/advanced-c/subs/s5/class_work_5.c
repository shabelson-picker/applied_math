#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

void get_user_input(Node **res);
Node *linked_list_smallest(Node *lst)
{
    printf("SNALLESR");
    if (lst == NULL)
        return NULL;
    Node *res = lst;
    Node *ptr = lst;
    printf("---");
    while (ptr != NULL)
    {

        if (res->data > ptr->data)
        {
            res = ptr;
            printf("%d < %d", res->data, ptr->data);
        }
        ptr = ptr->next;
    }
    return res;
}
void linked_list_remove_node(Node **lst, Node *remove)
{
    if ((*lst) == NULL)
        return;
    if ((*lst) == remove)
    {
        (*lst) = (*lst)->next;
        return;
    }
    Node *walker = *lst;

    while (walker->next != remove)
    {
        walker = walker->next;
    }
    if (walker->next == NULL)
    {
        fprintf(stderr, "valueError:item not in list ");
        exit(-1);
    }
    // if walker next next is Null , remove is the end , walker becomes the last
    walker->next = walker->next->next;
}
void linked_list_insert_sort(Node **lst, Node *new_n)
{
    if (*(lst) == NULL)
    {
        (*lst) = new_n;
    }
    Node *ptr = (*lst);
    Node *prev = ptr;
    while (ptr != NULL)
    {
        if (ptr->data > new_n->data)
        {
            prev->next = new_n;
            new_n->next = ptr;
            return;
        }
        prev = ptr;
        ptr = ptr->next;
    }
    prev->next = new_n;
}
void linked_list_sort(Node **lst)
{

    if (lst == NULL || (*lst)->next == NULL)
        return;
    printf("Sorting:\n");
    Node *new_head = linked_list_smallest(*lst);
    linked_list_remove_node(lst, new_head);
    new_head->next = NULL;
    printf("start:\n");

    while ((*lst) != NULL)
    {
        printf("lst:%p", (*lst));
        Node *temp = linked_list_smallest(*lst);
        linked_list_remove_node(lst, temp);
        temp->next = NULL;
        linked_list_insert_sort(&new_head, temp);
    }
    *lst = new_head;
}

void sort_example()
{
    int arr1[] = {3};
    int arr3[] = {1, 2, 3, 4, 5};
    int arr4[] = {5, -1, 2, 3, 1};

    Node *ls1 = linked_list_from_array(arr1, 1);
    Node *ls3 = linked_list_from_array(arr3, 5);
    Node *ls4 = linked_list_from_array(arr4, 5);

    linked_list_print(ls1);
    linked_list_print(ls3);
    linked_list_print(ls4);

    linked_list_sort(&ls1);
    linked_list_sort(&ls3);
    linked_list_sort(&ls4);

    linked_list_print(ls1);
    linked_list_print(ls3);
    linked_list_print(ls4);
}

void sort_user_input()
{
    Node *head;
    get_user_input(&head);
    linked_list_print(head);
}
void get_user_input(Node **res)
{
    int i;
    while (scanf("%d", &i))
    {
        printf("I got %d \n", i);
        Node *tmp = node_create_new(i, NULL);
        linked_list_insert_sort(res, tmp);
    }
}

void linked_list_reverse_in_place(Node **list)
{
    if ((*list) == NULL || (*list)->next == NULL) return;

    Node *head_lst = *list;
    Node *head_rev = NULL;
    Node *next = head_lst;
    while (head_lst != NULL)
    {
        next = head_lst;
        linked_list_remove_node(&head_lst, next);
        next->next = head_rev;
        head_rev = next;
    }
    (*list) = head_rev;
}
void linked_list_free(Node **list)
{
    if ((*list) == NULL)
        return;
    Node *ptr = *list;
    while (ptr != NULL)
    {
        Node *head = ptr->next;
        free(ptr);
        ptr = head;
    }
    *list = NULL;
}

int main()
{
    int arr3[] = {1, 2, 3, 4, 5};
    Node *ls3 = linked_list_from_array(arr3, 5);
    linked_list_print(ls3);
    linked_list_reverse_in_place(&ls3);
    linked_list_print(ls3);
    linked_list_free(&ls3);
    linked_list_print(ls3);
    free(ls3);
    ls3 = NULL;
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

Node *split_odd_even(int *num_array, int size)
{

    if (size == 0)
    {
        return NULL;
    }
    Node *root = node_create_new(num_array[0], NULL);

    for (int i = 1; i < size; i++)
    {
        if (num_array[i] % 2 == 0)
        {
            linked_list_insert_end(root, num_array[i]);
        }
        else
        {
            root = linked_list_insert_start(root, num_array[i]);
        }
    }
    linked_list_print(root);
    return root;
}

void q1()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    Node *list = split_odd_even(arr, 11);
    linked_list_print(list);
}

void q2()
{
    printf("2");
    Node *head = node_create_new(1, NULL);
    printf("h1 ptr : %p\n", head);
    head = linked_list_insert_start(head, 2);
    printf("h2 ptr : %p\n", head);
    linked_list_print(head);
}

void q3()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    printf("list from array\n");
    Node *l1 = linked_list_from_array(arr, 11);
    Node *l2 = linked_list_from_array(arr, 11);
    printf("insert start\n");
    l1 = linked_list_insert_start(l1, -99);
    linked_list_print(l1);
    linked_list_insert_start_ref(&l2, -99);
    Node *ptr1 = l1, *ptr2 = l2;
    while (ptr1->next != NULL && ptr2->next != NULL)
    {

        printf("%d (%d == %d) \n", ptr1->data == ptr2->data, ptr1->data, ptr2->data);
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    printf("del first\n");
    linked_list_print(l1);
    linked_list_del_first(&l1);
    linked_list_print(l1);
    printf("del last\n");
    linked_list_print(l1);
    linked_list_del_last(&l1);
    linked_list_print(l1);
    
    free(l1);
    free(l2);
}

int main(int argc, char **argv)

{
    for (int i = 1; i < argc; i++)
    {
        printf("arg: %c \n", argv[i][0]);
        switch (argv[i][0])
        {
        case '1':
            q1();
            break;
        case '2':
            q2();
            break;
        case '3':
            q3();
            break;

        default:
            break;
        }
    }
    printf("done\n");
    return 0;
}

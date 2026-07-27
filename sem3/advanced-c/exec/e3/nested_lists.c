#include <stdio.h>
#include <stdlib.h>

#define N 10

typedef struct node
{
    int data;
    struct node *next;
} node;

typedef struct list
{
    node *head;
    node *tail;

} list;

node *create_node(int data, node *next)
{
    node *item = (node *)malloc(sizeof(node));
    item->data = data;
    item->next = next;
    return item;
}

node *createListFromArray(int *arr, int n)
{

    // odd in the end, even at the start
    node *head = NULL;
    node *tail = NULL;
    if (n == 0)
        return NULL;
    head = tail = create_node(arr[0], NULL);

    for (int i = 1; i < n; i++)
    {
        if (arr[i] % 2 == 1)
        {
            head = create_node(arr[i], head);
        }
        else
        {
            tail->next = create_node(arr[i], NULL);
            tail = tail->next;
        }
    }
    return head;
}

list createListFromArray2(int *arr, int n)
{

    // odd in the end, even at the start
    list lst = (list){NULL, NULL};

    if (n == 0)
        return lst;
    lst.head = lst.tail = create_node(arr[0], NULL);

    for (int i = 1; i < n; i++)
    {
        if (arr[i] % 2 == 1)
        {
            lst.head = create_node(arr[i], lst.head);
        }
        else
        {
            lst.tail->next = create_node(arr[i], NULL);
            lst.tail = lst.tail->next;
        }
    }
    return lst;
}

void printList(node *head)
{

    while (head != NULL)
    {
        printf("[%d]->", head->data);
        head = head->next;
    }
    printf("NULL\n");
}
void printList2(list lst)
{
    
    while (lst.head != NULL)
    {
        printf("[%d]->", lst.head->data);
        lst.head = lst.head->next;
    }
    printf("NULL\n");
}


void append_to_head_by_ref(int data,node** prev_head)
{
    node *new_head = (node*) malloc(sizeof(node));
    new_head->next = (*prev_head);
    new_head->data = data;
    *prev_head = new_head;
    
}

node* append_to_head_by_val(int data,node* prev_head)
{
    node *new_head = (node*) malloc(sizeof(node));
    new_head->next = prev_head;
    new_head->data = data;
    return new_head;
}

int delete_head(node **head)
{
if ((*head)==NULL) return 0;

node* temp = (*head);
*head =(*head)->next;
printf("del %i\n",temp->data);
free (temp);

return 1;
}


int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    node *head = createListFromArray(arr, N);
    printList(head);
    list lst = createListFromArray2(arr,N);
    printList2(lst);

    head = append_to_head_by_val(99,head);
    printList(head);
    append_to_head_by_ref(111,&head);
    printList(head);
    delete_head(&head);
    while(delete_head(&head));
    printList(head);
    return 0;
}



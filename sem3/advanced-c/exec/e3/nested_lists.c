#include <stdio.h>
#include <stdlib.h>

#define N 10

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

typedef struct list
{
    Node *head;
    Node *tail;

} list;

Node *create_node(int data, Node *next)
{
    Node *item = (Node *)malloc(sizeof(Node));
    item->data = data;
    item->next = next;
    return item;
}

Node *createListFromArray(int *arr, int n)
{

    // odd in the end, even at the start
    Node *head = NULL;
    Node *tail = NULL;
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

void printList(Node *head)
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


void append_to_head_by_ref(int data,Node** prev_head)
{
    Node *new_head = (Node*) malloc(sizeof(Node));
    new_head->next = (*prev_head);
    new_head->data = data;
    *prev_head = new_head;
    
}

Node* append_to_head_by_val(int data,Node* prev_head)
{
    Node *new_head = (Node*) malloc(sizeof(Node));
    new_head->next = prev_head;
    new_head->data = data;
    return new_head;
}

int delete_head(Node **head)
{
if ((*head)==NULL) return 0;

Node* temp = (*head);
*head =(*head)->next;
printf("del %i\n",temp->data);
free (temp);

return 1;
}


int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    Node *head = createListFromArray(arr, N);
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



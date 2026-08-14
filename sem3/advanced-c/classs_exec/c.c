#include <stdio.h>
#include <stdlib.h>

#define N 10

typedef struct Node
{
    char data;
    struct Node *next;
} Node;

Node *createNode(char data, Node *next)
{
    Node *item = (Node *)malloc(sizeof(Node));
    item->data = data;
    item->next = next;
    return item;
}

void printList(Node *head)
{
    while (head != NULL)
    {
        printf("[%c] ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int deleteLast(Node **head)
{
    if (*head == NULL)
        return 0;

    if ((*head)->next == NULL)
    {
        free(*head);
        *head = NULL;
        return 1;
    }

    Node *ptr = *head;
    while (ptr->next->next != NULL)
        ptr = ptr->next;

    free(ptr->next);
    ptr->next = NULL;
    return 1;
}

void insertIntoSortedList(Node **head, char ch)
{
    printf("-%c-",ch);
    if ((*head)==NULL)
    {
        printf("1:=>\n");
        Node* new_head = createNode(ch,*head);
        *head = new_head;
        return;
    }
    if((*head)->data>=ch)
    {
        printf("2:=>\n");
        Node* new_head = createNode(ch,*head);
        *head = new_head;
        return;
    }
    Node* ptr = *head;
    printf("3:=>\n");
    while(ptr->next!=NULL)
    {
        printf("{%c}",ptr->data);
        if (ptr->next->data>ch) break;;
        ptr = ptr->next;
    }
    Node* new_node = createNode(ch,ptr->next);
    ptr->next = new_node;
}

void main()
{
    Node *head = NULL;
    char ch;

    printf("Enter chars and ENTER:\n");

    while ((ch = getchar()) != '\n'){
        printf("GOT IT\n");
        insertIntoSortedList(&head, ch);
        printList(head);}

    printList(head);
}
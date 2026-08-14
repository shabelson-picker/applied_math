#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct node
{
    char data;
    struct node *next;

} Node;







void linked_list_print(Node *head, int size)
{
    printf("[");
    while (head != NULL)
    {
        printf("%c,", head->data);
        head = head->next;
    }
    printf("NULL]");
}

Node *node_create_new(int value, Node *next)
{
    Node *new_n = (Node *)malloc(sizeof(Node));
    new_n->next = next;
    new_n->data = value;
    return new_n;
}

void linked_list_reverse(Node **head)
{
    if (*head == NULL || (*head)->next == NULL)
    {
        return;
    }
    Node *next,*cur,*prev;
    next = cur = prev = (*head);
    while (cur->next!=NULL)
    {
        cur = cur->next;
    }

}

Node *linked_list_insert_start(Node *list_head, char value)
{
    Node *new_n = node_create_new(value, list_head);
    printf("h: %p nh:%p", list_head, new_n);
    return new_n;
}
int linked_list_insert_end(Node *list_head, char value)
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

void call_reverse()
{
    Node *head = node_create_new('a', NULL);
    for (int i = 0; i < 10; i++)
    {
        linked_list_insert_end(head, 'a' + 1);
    }
    linked_list_reverse(head);
    linked_list_print(head, 11);
}












int main()
{
    call_reverse();
    return 0;
}

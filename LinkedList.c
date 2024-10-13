#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct Node *next;
};


void display(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("element :%d\n", ptr->data); 
        ptr = ptr->next; 
    }
}

int main()
{
    struct node *head;
    struct node *second;
    struct node *third;

    // allocae memory for node in heap
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    // link first and second node
    head->data = 7; // we can also write as (*head).data
    head->next = second;

    // link second to third
    second->data = 11;
    second->next = third;

    // terminate the 3rd node
    third->data = 66;
    third->next = NULL;

    display(head);
    return 0;
}

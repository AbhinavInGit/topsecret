#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void display(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("element = %d\n", ptr->data);
        ptr = ptr->next;
    }
}
// add in begining
struct node *addbeg(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->next = head;
    ptr->data = data;
    return ptr;
}
// add in middle
struct node *addmid(struct node *head, int data, int index)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head; 
    int i=0;
    while (i != index-1){
       p = p -> next; 
       i++; 
    }
    ptr->next = p -> next; 
    p -> next = ptr; 
    ptr -> data = data; //data bhi toh assign karna hai bhai
    return head; 
}
// add at the end
//i made this on my own haha
struct node *addend(struct node* head, int data){
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head; 
    
    while(p->next != NULL){
        p = p -> next; 
        
    }
    //  p = p -> next;

    // ptr = p;
    ptr->data = data; 
     p -> next = ptr;
     ptr -> next = NULL;  
    return head;

}

int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    head->data = 11;
    head->next = second;
    second->data = 12;
    second->next = third;
    third->data = 13;
    third->next = fourth;
    fourth->data = 14;
    fourth->next = NULL;

    // display(head);
    //head = addbeg(head, 56);
    head = addend(head, 99 );
    display(head);

}
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct node
{   
    int data; 
    struct node *Next; 
} *start = NULL;
struct node *create()
{
    struct node *N; 
    N =(struct node *) malloc(sizeof(struct node)); 
    return N;
}
void addbeg()
{
    struct node *N; 
    N = create(); 
    
    printf("input data for new node in circular linked list:");
    scanf("%d", &N -> data);
    if(start == NULL)
    {
        start = N;
        N -> Next = start; 
    }
    else 
    {
        struct node *ptr=start; 
        while(ptr->Next != start)
        {
            ptr = ptr->Next; 
        }
        N->Next = start; 
        ptr -> Next = N;
        start = N; 
    }
    

}
void display()
{
    if (start == NULL)
    {
        printf("List is empty.\n");
        return;
    }

    struct node *ptr = start;
    printf("Elements in the circular linked list: \n");

    do
    {
        printf("%d ", ptr->data);
        ptr = ptr->Next;
    } while (ptr != start); 

    printf("\n");
}

void main()
{
int ch, c;
  while (1)
  {

    printf("\n 0. Display");
    printf("\n 1. Add at beg");
    printf("\n 12. Exit");
    printf("\n Input your choice :");
    scanf("%d", &ch);

    switch (ch)
    {
    case 0:
      display();
      break;
    case 1:
      addbeg();
      break;
    case 12:
      exit(0);
      break;
    default:
      printf("\n Invalid choice");
    }
  }
}

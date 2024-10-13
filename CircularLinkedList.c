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
  N = (struct node *)malloc(sizeof(struct node));
  return N;
}
void addbeg()
{
  struct node *N;
  N = create();

  printf("input data for new node in circular linked list:");
  scanf("%d", &N->data);
  if (start == NULL)
  {
    start = N;
    N->Next = start;
  }
  else
  {
    struct node *ptr = start;
    while (ptr->Next != start)
    {
      ptr = ptr->Next;
    }
    N->Next = start;
    ptr->Next = N;
    start = N;
  }
}

void addend()
{
struct node *N; 
N=create(); 

printf("enter the data for the node\n"); 
scanf("%d", &N->data); 
if(start==NULL)
{
  start = N; 
  N->Next = start; 
}
else{
  struct node *ptr = start; 
  while(ptr->Next != start)
  {
    ptr = ptr->Next; 
  }
  ptr->Next=N; 
  N->Next = start; 
}
}

void delbeg()
{
  if(start == NULL){
    printf("insuffecient data to delete"); 
  } 
  else{
    struct node *ptr = start; 
    while (ptr -> Next != start){
      ptr = ptr ->Next; 

    }
    ptr->Next = start -> Next; 
    free(start); 
    start = ptr -> Next; 
    
  }
}

void dellast()
{
  if(start == NULL)
  {
    printf("not enough data to delete"); 
    
  }
  else{
    struct node *ptr1 = start; 
    struct node *ptr2 = start; 
    while(ptr2->Next != start)
    {
      ptr1 = ptr2;
      ptr2 = ptr2 -> Next; 
    }
    ptr1->Next = start;
    free(ptr2); 

  }
}

// void deleteind()
// {
//   int x, i=0; 
//   printf("enter the node index you wanna delete"); 
//   scanf("%d", %x ); 
  
// }

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
    printf("\n 2. Exit");
    printf("\n 3. add at end");
    printf("\n 4. Delete the first node");
    printf("\n 5. Delete the last node");

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
    case 2:
      exit(0);
      break;
    case 3:
      addend();
      break;
    case 4:
      delbeg();
      break;
    case 5:
      dellast();
      break;
    default:
     printf("\n Invalid choice");
    }
  }
}

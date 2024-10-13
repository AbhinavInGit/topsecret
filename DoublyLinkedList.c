#include <stdio.h>
#include <stdlib.h>

struct node
{
  struct node *prev;
  int data;
  struct node *next;
} *start = NULL;

struct node *create()
{
  struct node *N;
  N = (struct node *)malloc(sizeof(struct node));
  return N;
}

void display()
{
  struct node *ptr = start;

  printf("\nDoubly Linked List: ");
  while (ptr != NULL)
  {
    printf("%d ", ptr->data);
    ptr = ptr->next;
  }
  printf("\n");
}

void addlast()
{
  struct node *N;
  N = create();
  N->prev = NULL;

  printf("Input data for the doubly linked list: ");
  scanf("%d", &N->data);

  if(start == NULL)
  {
    start = N; 
    N-> next = NULL; 
  }
  else
  {
    struct node *ptr = start; 
    while (ptr->next != NULL)
    {
      ptr = ptr->next; 
    }
    ptr->next = N;
    N-> prev = ptr;
  }
}

void addbeg()
{
  struct node *N;
  N = create();
  N->prev = NULL;

  printf("Input data for the doubly linked list: ");
  scanf("%d", &N->data);

  if (start == NULL)
  {
    start = N;
    N->next = NULL;
  }
  else
  {
    N->next = start;
    start->prev = N;
    start = N;
  }
}

int main()
{
  int ch;

  while (1)
  {
    printf("\n0. Display");
    printf("\n1. Add at beginning");
    printf("\n2. Exit");
    printf("\n3. Add at last");

    printf("\nInput your choice: ");
    scanf("%d", &ch);

    switch (ch)
    {
    case 0:
      display();
      break;
    case 1:
      addbeg();
      break;
    case 3:
      addlast();
      break;
    case 2:
      printf("Exiting program...\n");
      exit(0);
    default:
      printf("\nInvalid choice\n");
    }
  }

  return 0;
}

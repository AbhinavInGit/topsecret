#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct Node
{
  int data;
  struct Node *Next;
} *Start = NULL;
/**************/
struct Node *create()
{
  struct Node *N;
  N = (struct Node *)malloc(sizeof(struct Node));
  return N;
}
/**************/
void Addbeg()
{
  struct Node *N;
  N = create();
  N->Next = Start;
  Start = N;
  printf("\n Input data for new node : ");
  scanf("%d", &N->data);
}
/**************/

void Display()
{
  struct Node *p;
  p = Start;
  if (Start == NULL)
    printf("\n  No data");
  else
  {
    printf("\n Data of Linked list :\n");
    while (p != NULL)
    {
      printf("  %d", p->data);
      p = p->Next;
    }
  }
}

/**************/
int main()
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
      Display();
      break;
    case 1:
      Addbeg();
      break;
    case 12:
      exit(0);
      break;
    default:
      printf("\n Invalid choice");
    }
  }
}
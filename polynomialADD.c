#include <stdio.h>
struct Node {
    int cof, exp; 
    struct Node *Next;
}*q = NULL;

create(){
    struct Node *N;
    N = (struct node)malloc(sizeof(struct Node)); 
    return N; 
}

void display(){
    struct Node *p; 
    p = Start; 
    if(Start == NULL) printf("no data");
    else {
        printf("\n Data of linked list \n"); 
        while (p!=NULL){
            printf("%d X %d", p->cof, p->exp);
            if(p->Next != NULL){
                printf("+"); 
                p=p->Next; 
            }
        }
    }
}

input()
{
    struct node *F=NULL, *L=NULL, *N;
    int n,l; 
    printf("Input the  number if terms \n"); 
    scanf("%d %d" , &N->cof, &N -> exp); 
    if(F==NULL) F==N;
    else {
        L->Next = N; 
        L = N;  
    }
}

polyadd()
{
    while (P != NULL)
    {
        N = create(); 
        if(P -> exp = Q -> exp)
        {
            N -> exp = p -> exp; 
            N -> cof = P->cof + Q->cof
        }
    }
}
void main()
#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
} *first=NULL;

void create (int A[], int n)
{
    int i;
    struct Node *t, *last;
    first =(struct Node* ) malloc (sizeof(struct Node));
    first ->data=A[0];
    first->next=NULL;
    last=first;
    for(i=0; i<n; i++)
    {
        t=(struct Node*)malloc(sizeof(struct Node));
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

void Display(struct Node *P)
{
    while (P!=0)
    {
        printf("%d", P->data);
        P=P->next;
    }
}
int main()
{
    struct Node *temp;
    int A[]={3,5,7,10,25,8,32,2};
    create (A,8);
    Display(first);
    return 0;
}
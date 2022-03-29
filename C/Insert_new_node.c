#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
} *first=NULL,*second=NULL, *third=NULL;

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

struct SortedInsert(struct Node *P, int x)
{
    struct Node *t, *q=NULL;
    t=(struct Node* )malloc(sizeof(struct Node));
    t->data=x;
    t->next=NULL;
    if(first==NULL)
    first=t;

    else{
        while (P && P->data < x)
        {
            q=P;
            P=P->next;

        }
        if(P==first)
        {
            t->next=first;
            first=t;
        }
        else
        {
            t->next=q->next;
            q->next=t;
        }
    }
}

int main()
{
    struct Node *temp;
    int A[]={3,5,7,10,25,8,32,2};
    create (A,8);
    printf("%d \n", SortedInsert(first ,15));
    Display(first);
    return 0;

}
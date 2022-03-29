
#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;

}*first=NULL;
void create(int A[], int n)
{
    int i;
    struct Node *t, *last;
    first =(struct Node* )malloc(sizeof(struct Node));
    first->data=A[0];
    first->next=NULL;
    last=first;

    for(i=1; i<n; i++)
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
    while (P!=NULL)
    {
        printf("%d ", P->data);
        P=P->next;
    }
}

void Insert(struct Node *P, int index, int x)
{
    struct Node *t;
    int i;
    // if(index < 0 || index > count (P))
    // return ;
    t=(struct Node *)malloc(sizeof(struct Node));
    t->data=x;
    if(index ==0)
    {
        t->next=first;
        first =t;

    }
    else {
        for(i=0; i<index-1; i++)
        P=P->next;
        t->next=P->next;
        P->next=t;
    }
}

int main()
{
    Insert(first,0,15);
    Insert(first,1,10);
    Insert(first,0,56);
    Insert(first,0,18);
    Insert(first,1,87);
    Display(first);
    return 0;

}

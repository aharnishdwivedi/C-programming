#include<stdio.h>


struct node
{
int data;
struct node *next;
struct node *prev;
};

void add(struct node* n)
{
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));

    temp->next = n->next;
    temp->data = n->data;
    temp->prev = n;

    n->data = inp();
    n->next = temp;
    n->prev = NULL;

}

void addlast(struct node* a)
{
    struct node* temp1;
    temp1 = (struct node*)malloc(sizeof(struct node));

    temp1->next = NULL;
    temp1->data = inp();
    temp1->prev = a;

    a->next = temp1;

}

void dell(struct node* x,int v)
{

    struct node* temp;
    int i;
    if(v != 1)
    {
    for(i = 1;i<v;i++)
    {
     x=x->next;

    }
    x = x->prev;
    temp = x->next;
    temp = temp->next;
    x->next = temp;
    temp->prev = x;
    }
    if(v == 1)
    {
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
    temp = x->next;
    x->next = temp->next;
    x->data = temp->data;
    x->prev = NULL;
    temp = temp->next;
    temp->prev = x;
    }

}

void printg(struct node* n)
{
    while(n != NULL)
    {
        printf("%d",n->data);
        n = n->next;
        if(n != NULL)
        {
            printf(" -> ");
        }
    }
}
int inp()
{
    int n;
    printf("enter value for list element\n");
    scanf("%d",&n);
    return n;
}
void ptt()
{
    printf("\nenter 1 to add at starting\n");
    printf("enter 2 to add at last\n");
    printf("enter 3 to delet an element\n");
    printf("enter 4 to print your list\n");
    printf("enter 5 to print your list backwards\n");
    printf("enter 0 to exit code\n");

}
void printgback(struct node* n)
{
    while(n->next != NULL)
    {
        n = n->next;
    }


    while(n != NULL)
    {
        printf("%d",n->data);
        n = n->prev;
        if(n != NULL)
        {
            printf(" -> ");
        }
    }
    printf("\n");
}




int main()
{
int c;
struct node* head = NULL;
struct node* second = NULL;
struct node* third = NULL;
struct node* fourth = NULL;

head = (struct node*)malloc(sizeof(struct node));
second = (struct node*)malloc(sizeof(struct node));
third = (struct node*)malloc(sizeof(struct node));
fourth = (struct node*)malloc(sizeof(struct node));

head->data = inp();
head->next = second;
head->prev = NULL;

second->data = inp();
second->next = third;
second->prev = head;

third->data = inp();
third->next = fourth;
third->prev = second;

fourth->data = inp();
fourth->next = NULL;
fourth->prev = third;

 abc:
ptt();
int a = 0;
scanf("%d",&a);

if(a>5)
{
    printf("enter valid digit\n");
    goto abc;
}

else if(a<0)
{
    printf("enter valid digit\n");
    goto abc;
}

else if(a == 4)
{
    printg(head);
    goto abc;
}

else if(a == 5)
{
    printgback(head);
    goto abc;
}

else if(a == 1)
{
    add(head);
    goto abc;
}

else if(a == 0)
{

}

else if(a == 2)
{
    addlast(fourth);
    goto abc;
}

else if(a == 3)
{

    printf("enter list element to be deleted\n");
    scanf("%d",&c);
    dell(head,c);
    goto abc;
}
}

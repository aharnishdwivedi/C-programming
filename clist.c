#include<stdio.h>
typedef struct node node;
struct node
{
    int data;
    node *ptr;
};
node *start=NULL;
node *t=NULL;
void addb()
{
    node* n=(node*)malloc(sizeof(node));
    printf("\nEnter number: ");
    scanf("%d",&n->data);
    n->ptr=start;
    start=n;
    n=NULL;
}
void delb()
{
    t=start;
    start=start->ptr;
    t->ptr=NULL;
    free(t);
}
void addl()
{
    node *n=(node*)malloc(sizeof(node));
    printf("\nEnter number: ");
    scanf("%d",&n->data);
    n->ptr=NULL;
    t=start;
    while(t->ptr!=NULL)
    {
        t=t->ptr;
    }
    t->ptr=n;
    n=NULL;
    t=NULL;
}

void dell()
{
    t=start;
    while(t->ptr->ptr!=NULL)
    {
        t=t->ptr;
    }
    t->ptr=NULL;

}

void show()
{
    printf("\nYour list:\n\n");
    t=start;
    while(t!=NULL)
    {
        printf("\t\t%d\n",t->data);
        t =t->ptr;
    }
    printf("\n\n");
}
int main()
{
    int ch,x=1;
    char t;
    printf("*********************************************LINKED LIST***********************************************\n\n");
    printf("\t\t\t\t    Create and modify your list!");
    while(x)
    {
        printf("\n\n\n Press 1 to add on top.\n Press 2 to add at bottom.\n Press 3 to delete from top.\n Press 4 to print list.\n\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: addb();
            break;
            case 2: addl();
            break;
            case 3: delb();
            break;
            case 4: show();
            break;
            default: printf("Invalid input!\n\n");
        }

        x++;
        if(x%5==0)
        {
            printf("\nPress \'n\' to exit. Press any other key to continue.\n");
            scanf(" %c",&t);
            printf("\n\n\n");
            if(t=='n'||t=='N')
                break;
        }
    }
    return 0;
}


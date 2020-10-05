#include<stdio.h>

struct emp
{
    char name[50];
    int empid;
    int age;
};

void input(struct emp *q)
{
    int i;
    for(i=0;i<3;i++)
    {
        printf("enter name,emp id,age of emp %d\n",i);
        scanf("%s", &q[i].name);
        scanf("%d %d",&q->empid,&q->age);
        q++;
    }
}

void main(void)
{
    int i;
    struct emp em[10];

    input(&em[0]);

    for(i=0;i<3;i++)
    {

        printf("%s %d %d",em[i].name,em[i].empid,em[i].age);
    }
}

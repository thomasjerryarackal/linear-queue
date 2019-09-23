#include<stdio.h>
#include<stdlib.h>
int size;
struct q
{
    int a[50];
    int front,rear;
};
void main()
{
    struct q p,*s;
    printf("enter the size:");
    scanf("%d",&size);
    p.front=-1;
    p.rear=-1;
    int op;
    while(1)
    {
        printf("\nselect:\n1.insert\n 2. del\n3.display\nexit\n");
        printf("enter the choice:");
        scanf("%d",&op);
        switch(op)
        {
            case 1: insert(&p);
                    break;
            case 2 :del(&p);
                    break;
            case 3: display(&p);
                    break;
            case 4 : exit(1);
            default:printf("invalid");
        }
    }
}
void insert(struct q*s)
{
    int item;
    if(s->rear==size-1)
    {
        printf("overflow");
        return;
    }
    else if ((s->rear==-1)&&(s->front == -1))
    {
        s->front=0;
    }
    printf("enter the item:");
    scanf("%d",&item);
    s->rear=s->rear+1;
    s->a[s->rear]=item;
}
void del(struct q *s)
{
    if (s->front==-1)
    {
        printf("empty");
        return;
    }
    else if (s->rear==s->front)
    {
        s->front=1;
        s->rear=-1;

    }
    else
    {
        s->front=s->front+1;
    }
}
void display(struct q *s)
{
    int i;
    if (s->front==-1)
    {
        printf("empty");
        return;
    }
    else{
        for (i=(s->rear);i>=(s->front);i--)
    {
        printf("%d\n",s->a[i]);
    }
    }

}

#include<stdio.h>
#include<stdlib.h>

typedef struct node Node;

struct node
{
    int value;
    Node *next;
};

Node *head=NULL;
Node *tail=NULL;

void insert(int);
void fetch();
void display();

int main()
{
    int choice,value,a;
    while(choice!=4)
    {
        printf("\nWhat do you want to do in Linked List\n\n");
        printf("1.   Insert\n2.   Fetch\n3.   Display\n4.   Exit\n\n");
        printf("\nEnter your choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:printf("\nEnter value you want to Insert\n");
                   scanf("%d",&value);
                   insert(value);
                   break;
            case 2:fetch();
                   break;
            case 3:printf("\nElements in Linked List are\n");
                   display();
                   break;
            case 4:break;
            default:break;
        }
    }
return 0;
}

void insert(int value)
{
    if(head==NULL)
    {
        head=(Node *)malloc(sizeof(Node));
        head->value=value;
        head->next=NULL;
        tail=head;
    }
    else
    {
        tail->next=(Node *)malloc(sizeof(Node));
        tail->next->value=value;
        tail->next->next=NULL;
        tail=tail->next;
    }
}

void fetch()
{
    Node *ptr=head;
    int index,i;
    printf("\nAt what index you want value to fetch\n");
    scanf("%d",&index);
    for(i=0;i<index;i++)
    {
        ptr=ptr->next;
    }
   printf("Value at index %d is %d",index,ptr->value);
}

void display()
{
    Node *ptr=head;
    if(ptr==NULL)
    {
        printf("\nLinked List is Empty\n");
    }
    else
    {
        while(ptr!=0)
        {
        printf("%d\t\t",ptr->value);
        ptr=ptr->next;
        }
    }
}

#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
}*head;

void createlist(int n);
void displaylist();
void InsertAtBeginning();
void InsertAtEnd();
void InsertAtMid(int position);

int main()
{
    int n,position;
    printf("Enter the number of input\n");
    scanf("%d",&n);
    createlist(n);
    printf("\n\nData in the list are\n");
    displaylist();
    InsertAtBeginning();
    printf("\n\nData in the list are\n");
    displaylist();
    printf("\n\nEnter the position where you want to insert the new node\n");
    scanf("%d",&position);
    InsertAtMid(position);
    printf("\n\n");
    displaylist();
    InsertAtEnd();
    printf("\n\nData in the list are\n");
    displaylist();
    return 0;
}

void createlist(int n)
{
    struct node *newnode,*current;
    int value,i;
    head=(struct node*)malloc(sizeof(struct node));

    if(head==NULL)
        printf("Memory full\n");
    else
    {
        printf("Enter first value\n");
        scanf("%d",&value);
        head->data=value;
        head->next=NULL;
        current=head;
        for(i=1; i<n; i++)
        {
            newnode=(struct node*)malloc(sizeof(struct node));

            printf("Enter value %d\n",i+1);
            scanf("%d",&value);
            newnode->data=value;
            newnode->next=NULL;
            current->next=newnode;
            current=newnode;
        }
    }
}

void InsertAtBeginning()
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\n\nEnter the value you want to insert at the beginning of the linked list\n");
    scanf("%d",&newnode->data);
    newnode->next=head;
    head=newnode;
}

void InsertAtMid(int position)
{
    struct node* current,*newnode;
    int i;
    current=head;
    for(i=1;i<position-1;i++)
        current=current->next;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\n\nEnter the value you want to insert in the linked list\n");
    scanf("%d",&newnode->data);
    newnode->next=current->next;
    current->next=newnode;
}

void InsertAtEnd()
{
    struct node* current,*newnode;
    current=head;
    while(current->next!=NULL)
        current=current->next;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\n\nEnter the value you want to insert at the end of the linked list\n");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    current->next=newnode;
}

void displaylist()
{
    struct node* current;
    current=head;
    while(current!=NULL)
    {
        printf("%d\n",current->data);
        current=current->next;
    }
}

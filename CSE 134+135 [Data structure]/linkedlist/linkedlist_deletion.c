#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
}*head;

void createlist(int n);
void displaylist();
void DeleteFromBeginning();
void DeleteFromEnd();
void DeleteFromMid(int position);

int main()
{
    int n,position;
    printf("Enter the number of input\n");
    scanf("%d",&n);
    createlist(n);
    printf("\n\nData in the list are\n");
    displaylist();
    DeleteFromBeginning();
    printf("\n\nAfter deleting first value the data in the list are\n");
    displaylist();
    printf("\n\nEnter the position of the node you want to delete\n");
    scanf("%d",&position);
    DeleteFromMid(position);
    printf("\n\nAfter deleting the node data in the list are\n");
    displaylist();
    DeleteFromEnd();
    printf("\n\nAfter deleting last value the data in the list are\n");
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

void DeleteFromBeginning()
{
    struct node*current;
    current=head;
    head=head->next;
    free(current);
}

void DeleteFromMid(int position)
{
    struct node* current,*previous;
    int i;
    current=head;
    for(i=1;i<position;i++)
    {
        previous=current;
        current=current->next;
    }
    previous->next=current->next;
    free(current);
}

void DeleteFromEnd()
{
    struct node *current,*previous;
    current=head;
    while(current->next!=NULL)
    {
        previous=current;
        current=current->next;
    }
    free(current);
    previous->next=NULL;

}

/*void DeleteFromEnd()
{
    struct node *current;
    current=head;
    while((current->next)->next!=NULL)
    {
        current=current->next;
    }
    free(current->next);
    current->next=NULL;
}*/

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

#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
}*head;

void createlist(int n);
void displaylist();
void searching(int searchitem);


int main()
{
    int n,position,value;
    printf("Enter the number of input\n");
    scanf("%d",&n);
    createlist(n);
    printf("\n\nData in the list are\n");
    displaylist();
    printf("Enter the value you want to search\n");
    scanf("%d",&value);
    searching(value);
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

void searching(int searchitem)
{
    int i=0;
    struct node* current;
    current=head;
    while(current!=NULL)
    {
        if(current->data==searchitem)
        {
            printf("Search item is found");
            break;
        }
        else
        {
            current=current->next;
        }
    }
    if(current==NULL)
    {
        printf("Search item not found");
    }
}

/*void searching(int searchitem)
{
    int i=0;
    struct node* current;
    current=head;
    while(current!=NULL)
    {
        if(current->data==searchitem)
        {
            printf("%d no. Item matched",i+1);
            return;
        }
        current=current->next;
        i++;
    }
    printf("Item not found");
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

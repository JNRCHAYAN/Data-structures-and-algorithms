#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node
{
    int data;
    struct node *link;
};

struct node *head = NULL;
void creation()
{
    int data, ch = 1,n;
    struct node *current, *temp;
    printf("Enter the number of data: ");
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
        current = (struct node*)malloc(sizeof(struct node));
        scanf("%d", &current -> data);
        current -> link = NULL;

        if(head == NULL)
        {
            head = current;
            temp = current;
        }
        else
        {
            temp -> link = current;
            temp = current;
        }
    }
}
void traverse()
{
    struct node *ptr = head;
    while(ptr != NULL)
    {
        printf("%d ", ptr -> data);
        ptr = ptr -> link;
    }
}
void getLength()
{
    struct node *ptr = head;
    int count = 0;
    while(ptr != NULL)
    {
        count++;
        ptr = ptr -> link;
    }
    printf("\nLength of the list = %d\n", count);
}
int search(int key)
{
    struct node *ptr = head;
    while(ptr != NULL)
    {
        if(ptr -> data == key)
            return 1;
        ptr = ptr -> link;
    }
    return -1;
}
void firstInsert(int value)
{
    struct node *firstNode;
    firstNode = (struct node*)malloc(sizeof(struct node));
    firstNode -> data = value;
    firstNode -> link = head;
    head = firstNode;
}
void lastInsert(int value)
{
    struct node *lastNode, *ptr;
    for(ptr = head; ;)
    {
        if(ptr -> link == NULL)
        {
            lastNode = (struct node*)malloc(sizeof(struct node));
            lastNode -> data = value;
            lastNode -> link = NULL;
            ptr -> link = lastNode;
            break;
        }
        ptr = ptr -> link;
    }
}


void insertAfterNode(int aVal, int sKey)
{
    struct node *ptr, *newNode;
    newNode = (struct node*)malloc(sizeof(struct node));
    for(ptr = head; ;)
    {
        if(ptr -> data == sKey)
        {
            if(ptr -> link == NULL)
            {
                newNode -> data = aVal;
                newNode -> link = NULL;
                ptr -> link = newNode;
                break;
            }
            else
            {
                newNode -> data = aVal;
                newNode -> link = ptr -> link;
                ptr -> link = newNode;
                break;
            }
        }
        ptr = ptr -> link;
        if(ptr == NULL)
        {
            printf("Item not found.. So insertion not possible\n");
            break;
        }
    }
}

int main()
{

    creation();
    printf("The list is: ");
    traverse();
    getLength();
    int searchItem;
    printf("\nEnter a search item: ");
    scanf("%d", &searchItem);
    int isFound = search(searchItem);
    if(isFound == 1)
        printf("Item is found\n");
    else
        printf("Item is not found\n");

    int fval;
    printf("\nEnter the value which you want to insert at first position: ");
    scanf("%d", &fval);
    firstInsert(fval);
    printf("The list after insert at first position: ");
    traverse();

    int lval;
    printf("\n\nEnter the value which you want to insert at last position: ");
    scanf("%d", &lval);
    lastInsert(lval);
    printf("The list after insert at last position: ");
    traverse();


    int aval, skey;
    printf("\n\nEnter the value which you want to insert after a given node: ");
    scanf("%d", &aval);
    printf("Enter the search node: ");
    scanf("%d", &skey);
    insertAfterNode(aval, skey);
    printf("The list after insert after a given node: ");
    traverse();

    return 0;
}

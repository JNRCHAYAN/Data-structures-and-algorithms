#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node *next;
};
node *head=NULL;

void traverse()
{
    node *ptr;
    ptr=head;
    while(ptr!=NULL)
    {
        cout<<ptr->data  << " ";
        ptr=ptr->next;
    }
    cout<< " "<<endl;
}

void creation()
{
    cout<<"enter value :";
    node *temp,*newnode;
    int value,n,i;
    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>value;
        newnode= new node;
        newnode->data=value;
        newnode->next=NULL;
        if(head==NULL)
    {
        head=newnode;
        temp=newnode;
    }
    else
    {
        temp->next=newnode;
        temp=newnode;
    }
 }
 traverse();
}


void firstdelet()
{
    cout << "Delete First Node : " ;
    node *ptr;
    ptr=head;
    head = ptr->next;
    traverse();

}

void lastdelete()
{
    cout << "Delete Last Node : " ;
    node *ptr ,*temp;
    ptr=head;
    temp=head;
    ptr= ptr->next;
    while(true)
        {  if(ptr->next==NULL)
            {
                head->next=NULL ;
                break;
            }
            ptr= ptr->next;
            head = head->next;
        }
        head=temp;
        traverse();
}

void positionDelete()
{
    cout<<"Enter Your position :";
    node *Head1, *temp;
    Head1=head;
    temp=head;
    int pos,count=1;
    cin>>pos;
    temp= temp->next;
    cout << "Delete Position Node : ";
    while(true)
    {
        if(count == pos-1)
        {
            head->next = temp->next;
            break;
        }
        count++;
        head=head->next;
        temp= temp->next;
    }
    head = Head1;
    traverse();
}


int main()
{
    creation();
    firstdelet();
    lastdelete();
    positionDelete();

}

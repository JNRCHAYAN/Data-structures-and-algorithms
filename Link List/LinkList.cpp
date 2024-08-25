#include<iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
};
node *head=NULL;
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

}



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

void finser()
{
    cout<<"first insertion   :";
    node *firstnode,*ptr;
    int value;
    cin>>value;
    ptr=head;

    firstnode=new node;
    firstnode->data=value;
    firstnode->next=ptr;
    ptr=firstnode;
    head = ptr;
}
void position()
{
    cout<<"position :";
    node *ptr,*newnode;
    ptr=head;
    int pos,value,count=0;
    cin>>pos;
    cin>>value;
    while(!0)
    {
        if(count==pos)
        {
            newnode=new node;
            newnode->data=value;
            newnode->next=ptr->next;
            ptr->next=newnode;
            break;
        }
        count++;
        ptr=ptr->next;
    }
}
 void lastinsertion()
    {
        cout<<"last insertion :" ;
        node *lastnode,*ptr;
        ptr=head;
        int value;
        cin>>value;
        for(;;)
        {
            if(ptr->next==NULL)
            {

                lastnode=new node;
                lastnode->data=value;
                lastnode->next=NULL;
                ptr->next=lastnode;
                break;
            }
            ptr=ptr->next;
        }
    }

int main()
{
    creation();
    traverse();
    finser();
    traverse();
    position();
    traverse();
    lastinsertion();
    traverse();
}

#include<iostream>
#include<chrono>
using namespace std;
using std :: chrono ::high_resolution_clock;
using std :: chrono ::duration;


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
    cout << "Link-List Element : ";
    while(ptr!=NULL)
    {
        cout<<ptr->data  << " ";
        ptr=ptr->next;
    }
    cout<< " "<<endl<<endl;
}

void creation()
{
    auto start = high_resolution_clock::now();
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
    auto end = high_resolution_clock::now();
    duration<double> elapsed = end - start;
    cout << "LinkList Create Time Need :  "<< elapsed.count() << "seconds" << endl;

}


void firstdelet()
{
    auto start = high_resolution_clock::now();

    cout << "Delete First Node : " ;
    node *ptr;
    ptr=head;
    head = ptr->next;


    auto end = high_resolution_clock::now();

    duration<double> elapsed = end - start;
    cout << "First Element Delete Time Need : "<< elapsed.count() << "seconds" << endl;

}

void lastdelete()
{
    auto start = high_resolution_clock::now();

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
    auto end = high_resolution_clock::now();
    duration<double> elapsed = end - start;
    cout << "Last Element Delete Time Need : "<< elapsed.count() << "seconds" << endl;

}

void positionDelete()
{
    auto start = high_resolution_clock::now();

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
    auto end = high_resolution_clock::now();
    duration<double> elapsed = end - start;
    cout << "Position Element Delete Time Need : "<< elapsed.count() << "seconds" << endl;

}


int main()
{
    creation();
    traverse();

    firstdelet();
    traverse();

    lastdelete();
    traverse();

    positionDelete();
    traverse();

}

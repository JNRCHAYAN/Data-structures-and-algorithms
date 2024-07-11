#include<iostream>
using namespace std;
int queue[4],front =-1,rear=-1,n=4;
void enqueue()
{
    int val;
    if((front==rear+1)||(front==0 && rear==n-1))
    {
        cout<<" overflow "<<endl;
    }
    else
    {
        if(front==-1)
        {
            front=0;
        }
            cout<<"Enqueue elements in queue :";
            cin>>val;
            rear=(rear+1)%n;
            queue[rear]=val;
    }
}
void dequeue()
{
    int i;
    if(front==-1)
    {
        cout<<"underflow"<<endl;
    }
    else
    {
        cout<<"dequeue element from queue :"<<queue[front]<<endl;
        if(front==rear)
        {
            front=-1;
            rear=-1;
        }
        else{
            front=(front+1)%n;
        }
    }

}
void display()
{
    int i;
    if(front==-1)
    {
        cout<<"Empty";

    }
    else
    {
        cout<<"\n front :"<<front;
        cout <<"\n value :";
        for(i=front; i !=rear; i=(i+1)%n)
        {
            cout<<queue[i]<<"  :";
        }
        cout<<queue[i]<<endl;
        cout<<"rear :" <<rear<<endl;

    }
}
int main()
{
 dequeue();
    enqueue();
     enqueue();
      enqueue();
       enqueue();
        enqueue();
         enqueue();
         
         display();
         dequeue();
         display();
         enqueue();
         display();
          enqueue();
}
#include<iostream>
using namespace std;

class Queue
{
    public:

    int Front;
    int Rare;
    int iSize;
    int *Arr;


    Queue(int data);
    int isEmpty();
    int isFull();
    void Display();
    void EnQueue(int iNo);
    void DeQueue();
};
Queue::Queue(int data)
{
   Front=0;
   Rare=0;
   iSize=data;
   Arr=new int[iSize];
}
int Queue::isEmpty()
{
    if(Front==Rare)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}

int Queue::isFull()
{
    if(Rare+1%iSize==Front)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void Queue::Display()
{
    for(int i=Front+1;i<=Rare;i++)
    {
        cout<<Arr[i]<<" ";
    }
    cout<<endl;

}
void Queue::EnQueue(int iNo)
{
    if(isFull())
    {
        cout<<"Queue is full\n";
    }
    else
    {
        Rare=Rare+1%iSize;
        Arr[Rare]=iNo;
    }
}
void Queue::DeQueue()
{
   if(isEmpty())
   {
      cout<<"Queue is empty\n";
   }
   else
   {
      Front=Front+1%iSize;
   }
}
int main()
{
    Queue *qp=new Queue(20);
    qp->EnQueue(10);
    qp->EnQueue(20);
    qp->EnQueue(30);
    qp->EnQueue(40);
    qp->EnQueue(50);
    
    qp->DeQueue();
    qp->Display();
    return 0;
}
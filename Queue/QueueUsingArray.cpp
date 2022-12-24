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
    int getFront();
    int getBack();
    void EnQueue(int iNo);
    void DeQueue();
    void Display();
};
Queue::Queue(int data)
{
   this->Front=-1;
   this->Rare=-1;
   this->iSize=data;
   this->Arr=new int[this->iSize];
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
    if(Rare==iSize-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int Queue::getFront()
{
   return Arr[Front+1];
}
int Queue::getBack()
{
   return Arr[Rare];
}
void Queue::EnQueue(int iNo)
{
   if(isFull())
   {
      cout<<"Queue is full\n";
   }
   else
   {
      Rare++;
      Arr[Rare]=iNo;
   }
}
void Queue::DeQueue()
{
   if(isEmpty())
   {
      cout<<"Queue is Empty\n";
   }
   else
   {
      Front++;
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

    cout<<"Front:"<<qp->getFront()<<endl;
    cout<<"Back:"<<qp->getBack()<<endl;
   qp->DeQueue();
     cout<<"Front:"<<qp->getFront()<<endl;
    cout<<"Back:"<<qp->getBack()<<endl;

    qp->Display();

    return 0;
}
#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
};
typedef class node NODE;
typedef class node *PNODE;
class StackLL
{
private:
    PNODE first;
    int size;

public:
    StackLL();
    void Push(int iNo);
    void Pop();
    void Display();
    int Size();
};
StackLL::StackLL()
{
    first=NULL;
    size=0;
}
void StackLL::Push(int iNo)
{
    PNODE newn=new NODE;
    newn->data=iNo;
    newn->next=NULL;

    if(first==NULL)
    {
        first=newn;
    }
    else
    {
        PNODE temp=first;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newn;
    }
    size++;
}
void StackLL::Pop()
{
    if(first==NULL)
    {
        delete first;
        first=NULL;
    }
    else
    {
        PNODE temp=first;
        while(temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        delete temp->next;
        temp->next=NULL;
    }
    size--;
}
void StackLL::Display()
{
    PNODE temp=first;

    while(temp!=NULL)
    {
        cout<<"|"<<temp->data<<"|->";
        temp=temp->next;
    }
    cout<<"NULL\n";
}
int StackLL::Size()
{
    return size;
}
int main()
{
    StackLL *sobj=new StackLL();
    sobj->Push(10);
    sobj->Push(20);
    sobj->Push(30);
    sobj->Push(40);
    sobj->Push(50);
    sobj->Pop();
    sobj->Display();

    cout<<"Number of element in the stack are "<<sobj->Size()<<endl;

    
    return 0;
}
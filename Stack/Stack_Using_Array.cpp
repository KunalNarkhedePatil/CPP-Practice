#include <iostream>
using namespace std;

class stack
{
public:
    int Top;
    int size;
    int *Arr;
};
typedef class stack STACK;
typedef class stack *PSTACK;

class StackArray
{
private:
    int size;

public:
    StackArray();
    int isEmpty(PSTACK sp);
    int isFull(PSTACK sp);
    void Push(PSTACK sp,int iNo);
    void Pop(PSTACK sp);
    void Display(PSTACK sp);
    int Size();
};
StackArray::StackArray()
{
    size = 0;
}
int StackArray::isEmpty(PSTACK sp)
{
   if(sp->Top==-1)
   {
      return 1;
   }
   else
   {
      return 0;
   }
}
int StackArray::isFull(PSTACK sp)
{
   if(sp->Top==sp->size-1)
   {
      return 1;
   }
   else
   {
     return 0;
   }
}
void StackArray::Push(PSTACK sp,int iNo)
{
    if(isFull(sp))
    {
        cout<<"Stack is full\n";
        return;
    }
    else
    {
        sp->Top++;
        sp->Arr[sp->Top]=iNo;
        size++;
    }
}
void StackArray::Pop(PSTACK sp)
{
    if(isEmpty(sp))
    {
        cout<<"Stack is Empty\n";
        return;
    }
    else
    {
        sp->Top--;
        size--;
    }
}
void StackArray::Display(PSTACK sp)
{
    for(int i=0;i<=sp->Top;i++)
    {
        cout<<sp->Arr[i]<<"->";
    }
    cout<<"NULL\n";
}
int StackArray::Size()
{
    return size;
}
int main()
{
    StackArray *sobj = new StackArray();
    stack *sp=new stack();
    sp->Top=-1;
    sp->size=10;
    sp->Arr=new int[10];
    sobj->Push(sp,10);
    sobj->Push(sp,20);
    sobj->Push(sp,30);
    sobj->Push(sp,40);
    sobj->Push(sp,50);

    sobj->Display(sp);
    return 0;
}
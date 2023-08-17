#include<iostream>
using namespace std;

class stack
{
   public:
       int *Arr;
       int Top;
       int size;

       stack(int size)
       {
          Top=-1;
          this->size=size;
          Arr=new int[this->size];
       }
};
typedef class stack STACK;
typedef class stack * PSTACK;
class Demo
{
   public:
   int isFull(PSTACK sp);
   int isEmpty(PSTACK sp);
   void Push(PSTACK sp,int idata);
   void Pop(PSTACK sp);
   void Display(PSTACK sp);
   int Size();
};
int Demo::isFull(PSTACK sp)
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
int Demo::isEmpty(PSTACK sp)
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
void Demo::Push(PSTACK sp,int idata)
{
    if(isFull(sp))
    {
       cout<<"Stack is Full\n";
       return;
    }
    else
    {
        sp->Top++;
        sp->Arr[sp->Top]=idata;
    }
}
void Demo::Pop(PSTACK sp)
{
   if(isEmpty(sp))
   {
      cout<<"Stack is empty\n";
      return;
   }
   else
   {
      sp->Top--;
   }
}
void Demo::Display(PSTACK sp)
{
    for(int i=0;i<=sp->Top;i++)
    {
        cout<<sp->Arr[i]<<"->";
    }
}
int main()
{
    Demo *dobj=new Demo();
    stack *sp=new stack(5);

    dobj->Push(sp,10);
    dobj->Push(sp,20);
    dobj->Push(sp,30);
    dobj->Push(sp,40);
    dobj->Push(sp,50);
    //dobj->Push(sp,60);

    dobj->Pop(sp);
    dobj->Pop(sp);
    dobj->Pop(sp);
    dobj->Pop(sp);
    dobj->Pop(sp);
    dobj->Pop(sp);

    dobj->Display(sp);
    return 0;
}
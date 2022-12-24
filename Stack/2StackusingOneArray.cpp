#include<iostream>
using namespace std;
class Stack
{
    public:

    int iSize;
    int Top1;
    int Top2;
    int *Arr;

    Stack(int isize);
    int isEmpty();
    int isFull();
    void Display1();
    void Display2();
    void Push1(int iNo);
    void Push2(int iNo);
    void Pop1();
    void Pop2();
};
Stack::Stack(int isize)
{
   iSize=isize;
   Top1=-1;
   Top2=iSize;
   Arr=new int[iSize];
}
int Stack::isEmpty()
{
   if(Top1==-1 && Top2==iSize)
   {
      return 1;
   }
   else
   {
      return 0;
   }
}
int Stack::isFull()
{
   if(Top1+1==Top2)
   {
      return 1;
   }
   else
   {
      return 0;
   }
}
void Stack::Push1(int iNo)
{
   if(isFull())
   {
      cout<<"Stack is full\n";
      return;
   }
   else
   {
      Top1++;
      Arr[Top1]=iNo;
   }
}
void Stack::Push2(int iNo)
{
   if(isFull())
   {
      cout<<"Stack is full\n";
      return;
   }
   else
   {
      Top2--;
      Arr[Top2]=iNo;
   }
}
void Stack::Pop1()
{
    if(isEmpty())
    {
        cout<<"Stack is empty\n";
        return;
    }
    else
    {
        Top1--;
    }
}
void Stack::Pop2()
{
   
    if(isEmpty())
    {
        cout<<"Stack is empty\n";
        return;
    }
    else
    {
       Top2++;   
    }
}
void Stack::Display1()
{
    cout<<"Display1:\n";
   for(int i=0;i<=Top1;i++)
   {
      cout<<Arr[i]<<" ";
   }
   cout<<endl;
}
void Stack::Display2()
{
    
    cout<<"Display2:\n";
   for(int i=iSize-1;i>=Top2;i--)
   {
      cout<<Arr[i]<<" ";
   }
   cout<<endl;
}
int main()
{
    Stack *sp=new Stack(10);
    sp->Push1(10);
    sp->Push1(20);
    sp->Push1(30);
    sp->Push1(40);
    sp->Push1(50);
    sp->Display1();

    sp->Push2(10);
    sp->Push2(20);
    sp->Push2(30);
    sp->Push2(40);
    sp->Push2(50);

    sp->Display2();

    sp->Push1(60);
    sp->Display1();
    return 0;
}
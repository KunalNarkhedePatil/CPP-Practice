#include<iostream>
#include<string.h>

using namespace std;
class Stack
{
    public:

    int Top;
    int iSize;
    char *Arr;

    Stack(int data);
    int isEmpty();
    int isFull();
    void Push(char ch);
    char Pop();
    void ReverseString(char Str[],char Brr[]);
};
Stack::Stack(int data=5)
{
    this->Top=-1;
    this->iSize=data;
    this->Arr=new char[this->iSize];
}
int Stack::isEmpty()
{
  if(Top==-1)
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
   if(Top==iSize-1)
   {
      return 1;
   }
   else
   {
      return 0;
   }
}
void Stack::Push(char ch)
{
    if(isFull())
    {
        cout<<"Stack is full\n";
    }
    else
    {
        Top++;
        Arr[Top]=ch;
    }
}
char Stack::Pop()
{
   if(isEmpty())
   {
      cout<<"Stack is empty\n";
   }
   else
   {
      char ch=Arr[Top];
      Top--;
      return ch;

   }
}
void Stack::ReverseString(char Str[],char *Brr)
{
    
    int i=0;
    while(Str[i]!='\0')
    {
        Push(Str[i]);
        i++;
    }
    int j=0;
    for(int i=Top;i>=0;i--)
    {
        Brr[j]=Pop();
        j++;
    }
    Brr[j]='\0';
}
int main()
{
    Stack *sobj=new Stack(20);
    char str[15];
    cout<<"Enter the String\n";
    cin.getline(str,15);
    char *Brr=new char[strlen(str)];
    sobj->ReverseString(str,Brr);
    cout<<Brr;
    return 0;
}
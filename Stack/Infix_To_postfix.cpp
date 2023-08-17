#include<iostream>
using namespace std;
class Stack
{
   private:

   int Top;
   int iSize;
   int *Arr;

   public:
   
   Stack();
   void Push(char ch);
   char Pop();
   int isEmpty();
   int isFull();
   int isOperator(char ch);
   int Precedence(char ch);
   char StackTop();
   void InfixTopostfix(char *Infix,char *Postfix);
};
Stack::Stack()
{
    Top=-1;
    iSize=20;
    Arr=new int[iSize];
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
int Stack::Precedence(char ch)
{
    if(ch=='^')
    {
        return 3;
    }
    else if(ch=='*'||ch=='/')
    {
        return 2;
    }
    else if(ch=='+'||ch=='-')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int Stack::isOperator(char ch)
{
    if(ch=='+'||ch=='-'||ch=='*'||ch=='/'||ch=='^')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
char Stack::StackTop()
{
    return Arr[Top];
}
void Stack::InfixTopostfix(char *Infix,char *Postfix)
{
    int i=0;
    int j=0;
   while(Infix[i]!='\0')
   {
       if(!isOperator(Infix[i]))
       {
           Postfix[j]=Infix[i];
           i++;
           j++;
       }
       else
       {
          if(Precedence(Infix[i])>Precedence(StackTop()))
          {
              Push(Infix[i]);
              i++;
          }
          else
          {
             Postfix[j]=Pop();
             j++;
          }
       }
   }
   while(!isEmpty())
   {
      Postfix[j]=Pop();
      j++;
   }
   Postfix[j]='\0';
}
int main()
{
    char Exp[20];
    char *Postfix=NULL;
    Stack *sobj=new Stack();
    cout<<"Enter the Expression\n";
    cin.getline(Exp,20);

    Postfix=new char[sizeof(Exp)+1];
    sobj->InfixTopostfix(Exp,Postfix);
    cout<<Postfix;
    return 0;
}
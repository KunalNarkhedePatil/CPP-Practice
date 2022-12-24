#include<iostream>
#include<stack>
using namespace std;
void sortedinserted(stack<int> &s,int iNo)
{
   if(s.empty()||(!s.empty() && s.top()<iNo))
   {
      s.push(iNo);
      return;
   }
   int x=s.top();
   s.pop();
   sortedinserted(s,iNo);
   s.push(x);
}
void sortStack(stack<int> &s)
{
   if(s.empty())
   {
      return;
   }
   int x=s.top();
   s.pop();
   sortStack(s);
   sortedinserted(s,x);
}
int main()
{
   stack<int> s;
   s.push(10);
   s.push(30);
   s.push(40);
   s.push(20);
   s.push(50);

   sortStack(s);

   while(!s.empty())
   {
      cout<<s.top()<<endl;
      s.pop();
   }
   return 0;
}
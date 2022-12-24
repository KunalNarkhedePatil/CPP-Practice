#include<iostream>
#include<stack>
using namespace std;
void insertatbottom(stack<int> &s,int ino)
{
    if(s.empty())
    {
        s.push(ino);
        return;
    }

    int x=s.top();
    s.pop();

    insertatbottom(s,ino);
    s.push(x);
}
void reversestack(stack<int> &s)
{
   if(s.empty())
   {
      return;
   }
   int x=s.top();
   s.pop();

   reversestack(s);
   insertatbottom(s,x);
}
int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    reversestack(s);

    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
}
#include<iostream>
#include<stack>
using  namespace std;

void solve(stack<int> &s,int ino)
{
    if(s.empty())
    {
        s.push(ino);
        return;
    }

    int x=s.top();
    s.pop();
  

    solve(s,ino);
    s.push(x);
}
int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    //int count=s.size();
    solve(s,60);

    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
}
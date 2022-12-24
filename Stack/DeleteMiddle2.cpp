#include<iostream>
#include<stack>

using namespace std;
void solve(stack<int> &s,int count,int size)
{
    stack<int> temp;

    while(count<size/2)
    {
        int ino=s.top();
        s.pop();
        count++;
        temp.push(ino);
    }
    s.pop();

    while(!temp.empty())
    {
        int ino=temp.top();
        temp.pop();
        s.push(ino);
    }
}
int main()
{
    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    int count=0;
    int n=s.size();

    solve(s,count,n);

    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
    
    return 0;
}
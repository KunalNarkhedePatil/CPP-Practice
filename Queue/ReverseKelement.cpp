#include<iostream>
#include<stack>
#include<queue>

using namespace std;
void solve(queue<int> &q,int size,int k)
{
    stack<int> s;
    for(int i=0;i<k;i++)
    {
        int iNo=q.front();
        q.pop();
        s.push(iNo);
    }
    while(!s.empty())
    {
        int val=s.top();
        s.pop();
        q.push(val);
    }
    int n=size-k;

    while(n--)
    {
        int val=q.front();
        q.pop();
        q.push(val);

    }
}
int main()
{
    queue<int> q;
    int k=3;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    solve(q,q.size(),k);

    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}
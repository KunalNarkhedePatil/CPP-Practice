#include<iostream>
#include<stack>
#include<queue>
using namespace std;

int main()
{
    stack<int> s;
    queue<int> q,q2;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    while(!q.empty())
    {
        int iNo=q.front();
        s.push(iNo);
        q.pop();
    }
    while(!s.empty())
    {
        int iNo=s.top();
        q.push(iNo);
        s.pop();
    }
    
    while(!q.empty())
    {
        int iNo=q.front();
        cout<<iNo<<" ";
        q.pop();
    }



    

    


    return 0;
}

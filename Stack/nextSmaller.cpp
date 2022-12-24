#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<int> s;
    s.push(-1);

    int Arr[4]={2,1,4,3};
    int Ans[4];
    for(int i=3;i>=0;i--)
    {
        int curr=Arr[i];

        while(s.top()>=curr)
        {
            s.pop();
        }
        Ans[i]=s.top();
        s.push(curr);
        
    }
    for(int i=0;i<4;i++)
    {
        cout<<Ans[i]<<" ";
    }
    return 0;
}
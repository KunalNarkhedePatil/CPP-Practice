#include<iostream>
#include<stack>

using namespace std;
void solve(stack<int> &s,int iNo)
{
    if((s.empty())||(!s.empty()&&s.top()<iNo))
    {
        s.push(iNo);
        return;
    }
    int x=s.top();
    s.pop();

    solve(s,iNo);

    s.push(x);

}
int main()
{
    stack<int> s;

   for(int i=1;i<=5;i++)
   {
      int iNo;
      cout<<"Enter data\n";
      cin>>iNo;
      solve(s,iNo);
   }
   cout<<"--------------------------------------\n";
   while(!s.empty())
   {
     cout<<s.top()<<endl;
     s.pop();
   }
    return 0;
}
#include<iostream>
using namespace std;
int DisplayFact(int n)
{
    if(n==1)
    {
        return 1;
    }
    int fact=DisplayFact(n-1);
    int ans=n*fact;
    return ans;
}
int main()
{
    int iRet=DisplayFact(5);
    cout<<iRet<<endl;
    return 0;
}
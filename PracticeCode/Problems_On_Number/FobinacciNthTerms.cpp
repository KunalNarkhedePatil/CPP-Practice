#include<iostream>
using namespace std;
void FobonacciNthTerms(int iNo)
{
    int t1=0,t2=1,t3=0;

    cout<<t1<<" "<<t2<<" ";
    t3=t1+t2;
    for(int i=3;i<=iNo;i++)
    {
       cout<<t3<<" ";
       t1=t2;
       t2=t3;
       t3=t1+t2;
    }
}
int main()
{
    int iNo=0;
    cout<<"Enter the number\n";
    cin>>iNo;

    FobonacciNthTerms(iNo);
    return 0;
}
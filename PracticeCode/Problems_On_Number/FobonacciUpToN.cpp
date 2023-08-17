#include<iostream>
using namespace std;
void FobonacciUpToN(int iNo)
{
    int t1=0,t2=1,t3=0;
    while(t3<=iNo)
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
    
    FobonacciUpToN(iNo);

    return 0;
}
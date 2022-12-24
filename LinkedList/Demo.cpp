#include<iostream>
using namespace std;

int main()
{
    int t1=0;
    int t2=1;
    int t3=0;

    cout<<t1<<" "<<t2<<" ";
    t3=t1+t2;

    for(int i=3;i<=10;i++)
    {
        cout<<t3<<" ";
        int temp=t2;
        t2=t3;
        t3=temp+t2;
    }
    return 0;
}
#include<iostream>
using namespace std;
bool checkPrime(int iNo)
{
    int iFlag=0;

    for(int i=2;i<=iNo/2;i++)
    {
        if(iNo%i==0)
        {
            iFlag=1;
            break;
        }
    }
    if(iFlag==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int iNo=0;
    bool bRet=0;

    cout<<"Enter the number\n";
    cin>>iNo;

    bRet=checkPrime(iNo);

    if(bRet==true)
    {
        cout<<iNo<<" is prime number\n";
    }
    else
    {
        cout<<iNo<<" is not prime number\n";
    }

    return 0;
}
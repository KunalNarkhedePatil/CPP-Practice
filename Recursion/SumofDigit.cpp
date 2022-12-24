#include<iostream>
using namespace std;
int sumOfDigit(int n)
{
    if(n==0)
    {
        return 0;
    }
    int iDigit=n%10;
    int iRet=sumOfDigit(n/10);
    int sum=iRet+iDigit;
    return sum;
}
int main()
{
    int n=1234;
    int iRet=sumOfDigit(n);
    cout<<iRet<<endl;


    return 0;
}
#include<iostream>
using namespace std;
int ReverseNumber(int iNo)
{
    int iRev=0,iDigit=0;

    while(iNo!=0)
    {
        iDigit=iNo%10;
        iRev=iRev*10+iDigit;
        iNo=iNo/10;
    }
    return iRev;
}
int main()
{
    int iNo=0,iRet=0;

    cout<<"Enter the number\n";
    cin>>iNo;

    iRet=ReverseNumber(iNo);

    cout<<"Reverse number is "<<iRet<<endl;
}
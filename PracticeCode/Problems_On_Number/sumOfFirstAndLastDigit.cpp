#include<iostream>
using namespace std;
int sumOfFirstAndLastDigit(int iNo)
{
    int firstDigit=0,lastDigit=0,Digit=0;

    lastDigit=iNo%10;

    while(iNo!=0)
    {
        Digit=iNo%10;
        iNo=iNo/10;
    }
    firstDigit=Digit;
    return firstDigit+lastDigit;
}
int main()
{
    int iNo=0,iRet=0;
    cout<<"Enter the number\n";
    cin>>iNo;

    iRet=sumOfFirstAndLastDigit(iNo);

    cout<<"sum of first and last digit is "<<iRet<<endl;
    return 0;
}
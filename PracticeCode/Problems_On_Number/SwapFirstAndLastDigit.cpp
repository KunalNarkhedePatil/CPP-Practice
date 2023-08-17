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
int SwapFirstAndLastDigit(int iNum)
{ 
    int iNo=0;
    int iRev=0;
    int last=iNum%10;

    iNo=ReverseNumber(iNum);
    int first=iNo%10;
    iNo=iNo/10;

    iRev=iRev*10+last;

    while(iNo>9)
    {
        int iDigit=iNo%10;
        iRev=iRev*10+iDigit;
        iNo=iNo/10;
    }
    iRev=iRev*10+first;

    return iRev;

}
int main()
{
    int iNo=0;

    cout<<"Enter the number\n";
    cin>>iNo;

    cout<<"After swapping first and last digit number is "<<SwapFirstAndLastDigit(iNo)<<endl;


    return 0;
}
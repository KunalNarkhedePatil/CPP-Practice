#include<iostream>
using namespace std;
void sumOfAllEvenOddFrom1ToN(int iNo)
{
    int sumEven=0,sumOdd=0;

    for(int i=1;i<=iNo;i++)
    {
        if(i%2==0)
        {
            sumEven=sumEven+i;
        }
        else
        {
            sumOdd=sumOdd+i;
        }
    }
    cout<<"sum of Even"<<sumEven<<endl;
    cout<<"sum of Odd"<<sumOdd<<endl;
    
}
int main()
{
    int iNo=0;

    cout<<"Enter the number\n";
    cin>>iNo;

    sumOfAllEvenOddFrom1ToN(iNo);


    return 0;
}
#include<iostream>
using namespace std;
int CountDigit(int iNo)
{
    int iCnt=0;

    while(iNo!=0)
    {
        iCnt++;
        iNo=iNo/10;
    }
    return iCnt;

}
int main()
{
    int iNo=0;
    int iRet=0;


    cout<<"Enter the number\n";
    cin>>iNo;

    iRet=CountDigit(iNo);

    cout<<"Count of digit in a number is "<<iRet<<endl;

    return 0;
}
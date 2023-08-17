#include<iostream>
using namespace std;
int SumOfDigit(int iNo)
{
   int iSum=0,iDigit=0;
   if(iNo<0)
   {
     iNo=-iNo;
   }
   while(iNo!=0)
   {
      iDigit=iNo%10;
      iSum=iSum+iDigit;
      iNo=iNo/10;
   }
   return iSum;
}
int main()
{
    int iNo=0,iRet=0;
    cout<<"Enter the number\n";
    cin>>iNo;

    iRet=SumOfDigit(iNo);

    cout<<"Sum of digit is "<<iRet<<endl;




    return 0;
}
#include<iostream>
using namespace std;
int ProductOfDigit(int iNo)
{
   int iMult=1,iDigit=0;
   if(iNo<0)
   {
     iNo=-iNo;
   }
   while(iNo!=0)
   {
      iDigit=iNo%10;
      iMult=iMult*iDigit;
      iNo=iNo/10;
   }
   return iMult;
}
int main()
{
    int iNo=0,iRet=0;

    cout<<"Enter the number\n";
    cin>>iNo;

    iRet=ProductOfDigit(iNo);

    cout<<"Product of digit is "<<iRet<<endl;




    return 0;
}
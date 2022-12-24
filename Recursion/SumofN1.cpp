#include<iostream>
using namespace std;
int DisplaySum(int n)
{
   if(n==1)
   {
      return 1;
   }
   int iNo=DisplaySum(n-1);
   int isum=n+iNo;
   return isum;
}
int main()
{
    int iRet=DisplaySum(5);
    cout<<iRet<<endl;
    return 0;
}
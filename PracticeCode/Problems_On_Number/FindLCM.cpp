#include<iostream>
using namespace std;
int findMax(int iNo1,int iNo2)
{
   if(iNo1>iNo2)
   {
      return iNo1;
   }
   else
   {
     return iNo2;
   }
}
int FindLCM(int iNo1,int iNo2)
{
    int LCM=1,iMax=0,i=0;

    iMax=findMax(iNo1,iNo2);
    i=iMax;
    while(1)
    {
        if(i%iNo1==0 && i%iNo2==0)
        {
            LCM=i;
            break;
        }
        i=i+iMax;
    }
    return LCM;
}
int main()
{
    int iNo1=0,iNo2=0,iRet=0;
    cout<<"Enter the first number\n";
    cin>>iNo1;

    cout<<"Enter the second number\n";
    cin>>iNo2;

    iRet=FindLCM(iNo1,iNo2);

    cout << "LCM of " << iNo1 << " and " << iNo2 << " is " << iRet << endl;
    return 0;
}
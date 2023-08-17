#include <iostream>
using namespace std;
int max(int iNo1,int iNo2,int iNo3)
{
    if(iNo1>iNo2 && iNo1>iNo3)
    {
       return iNo1; 
    }
    else if(iNo2>iNo1 && iNo2>iNo3)
    {
        return iNo2;
    }
    else
    {
        return iNo3;
    }
}
int  min(int iNo1,int iNo2,int iNo3)
{
    if(iNo1<iNo2 && iNo1<iNo3)
    {
       return iNo1; 
    }
    else if(iNo2<iNo1 && iNo2<iNo3)
    {
        return iNo2;
    }
    else
    {
        return iNo3;
    }
}
int main() {
   int t=0;
   int A=0,B=0,C=0;
   
   cin>>t;
   
   while(t--)
   {
       cin>>A>>B>>C;
       
       cout<<max(A,B,C)-min(A,B,C)<<endl;
   }
	return 0;
}

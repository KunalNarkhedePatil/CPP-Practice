#include<iostream>
using namespace std;


int  Display(int Arr[],int n,int Max)
{
    if(n==0)
    {
       return Arr[n];
    }
    int iRet=Display(Arr,n-1,Max);
    if(iRet>Arr[n])
    {
        Max=iRet;
    }
    else
    {
        Max=Arr[n];
    }
    return Max;

}


int main()
{
    int Arr[]={10,20,30,40,50};
    cout<<Display(Arr,4,0);
    return 0;
}
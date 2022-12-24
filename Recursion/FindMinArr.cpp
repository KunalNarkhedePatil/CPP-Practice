#include<iostream>
using namespace std;


int  Display(int Arr[],int n,int Min)
{
    if(n==0)
    {
       return Arr[n];
    }
    int iRet=Display(Arr,n-1,Min);
    if(iRet<Arr[n])
    {
        Min=iRet;
    }
    else
    {
        Min=Arr[n];
    }
    return Min;

}


int main()
{
    int Arr[]={10,20,30,40,50};
    cout<<Display(Arr,4,0);
    return 0;
}
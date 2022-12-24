#include<iostream>
using namespace std;
void Display(int Arr[],int n,int sum)
{
    if(n==0)
    {
       sum=sum+Arr[n];
       cout<<sum<<endl;
       return;
    }
    sum=sum+Arr[n];
    Display(Arr,n-1,sum);
}

int  Display(int Arr[],int n)
{
    if(n==0)
    {
       return Arr[n];
    }
    int iRet=Display(Arr,n-1);
    int Ans=iRet+Arr[n];
    return Ans;

}


int main()
{
    int Arr[]={10,20,30,40,50};
    Display(Arr,5-1,0);
    cout<<Display(Arr,4);
    return 0;
}
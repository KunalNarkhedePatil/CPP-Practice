#include<iostream>
using namespace std;


void Display(int Arr[],int n,int Max,int Min)
{
    if(n==5)
    {
        if(Max>Arr[n])
        {
            Max=Arr[n];
        }
        if(Max>Arr[n])
        {
            Max=Arr[n];
        }
        cout<<Max<<" "<<Min<<endl;
        return;
    }
    if(Arr[n]>Max)
    {
        Max=Arr[n];
    }
    if(Arr[n]<Min)
    {
        Min=Arr[n];
    }
    Display(Arr,n+1,Max,Min);
}


int main()
{
    int Arr[]={10,20,30,40,50};
    Display(Arr,0,Arr[0],Arr[0]);
    return 0;
}
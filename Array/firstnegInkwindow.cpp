#include<iostream>

using namespace std;

int main()
{
    int Arr[5]={-8,2,3,-6,10};
    int Brr[4];
    int i=0;
    int j=0;
    for(i=0;i<5;i++)
    {
        if(Arr[i]<0)
        {
            Brr[j]=Arr[i];
        }
        else if(Arr[i+1]<0)
        {
           Brr[j]=Arr[i+1];
        }
        if(Arr[i]>0&&Arr[i+1]>0)
        {
            Brr[j]=0;
        }
        j++;
    }
    int iNo=sizeof(Brr)/sizeof(int);
    for(int j=0;j<4;j++)
    {
       cout<<Brr[j]<<" ";
    }
    return 0;
}
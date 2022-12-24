#include<iostream>

using namespace std;

int main()
{
    int Arr[10]={1,2,3,4,5,6,7,8,9};
    int Brr[10]={0};

    int j=0;
    for(int i=0;i<9;i++)
    {
        if(Arr[i]%2==0)
        {
            Brr[j]=Arr[i];
            j++;
        }
    }
    for(int i=0;i<9;i++)
    {
        if(Arr[i]%2==1)
        {
            Brr[j]=Arr[i];
            j++;
        }
    }
    for(int i=0;i<9;i++)
    {
        cout<<Brr[i]<<" ";
    }
    return 0;
}
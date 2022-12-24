#include<iostream>
using namespace std;

int main()
{
    int Arr[5]={6,2,8,4,10};

    int minInd=0;
    for(int i=0;i<5-1;i++)
    {
        minInd=i;
        for(int j=i+1;j<5;j++)
        {
            if(Arr[j]<Arr[minInd])
            {
                minInd=j;
            }
        }
        if(minInd!=i)
        {
            int Temp=Arr[minInd];
            Arr[minInd]=Arr[i];
            Arr[i]=Temp;
        }
    }
    for(int i=0;i<5;i++)
    {
        cout<<Arr[i]<<" ";
    }
    return 0;
}
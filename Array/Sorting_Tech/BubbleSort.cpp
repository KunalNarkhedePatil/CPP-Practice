#include<iostream>
using namespace std;

int main()
{
    int Arr[5]={12,11,13,5,6};

    for(int i=0;i<5-1;i++)  //ye loop madhe yasathi 5-1 ghetal karan last wala automatically sorted hil
    {
        bool swaped=false;
        for(int j=0;j<5-i-1;j++)
        {
            if(Arr[j]>Arr[j+1])
            {
                swaped=true;
                int temp=Arr[j];
                Arr[j]=Arr[j+1];
                Arr[j+1]=temp;
            }
        }
        if(swaped==false)
        {
            break;
        }
    }
    for(int i=0;i<5;i++)
    {
        cout<<Arr[i]<<" ";
    }
    return 0;
}
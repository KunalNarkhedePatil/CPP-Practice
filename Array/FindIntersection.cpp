#include<iostream>
using namespace std;

int main()
{
    int Arr[5]={1,2,3,4,5};
    int Brr[4]={6,7,3,4};

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(Arr[i]==Brr[j])
            {
               cout<<Arr[j]<<" ";
            }
        }
    }
    return 0;
}
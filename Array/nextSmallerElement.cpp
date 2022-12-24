#include<iostream>
using namespace std;

int main()
{
    int Arr[4]={2,1,4,3};
    int i=0;
    int j=0;
    for(i=0;i<4;i++)
    {
        for(j=i+1;j<4;j++)
        {
            if(Arr[i]>Arr[j])
            {
                break;
            }
        }
        if(j<4)
        {
            Arr[i]=Arr[j];
        }
        else
        {
            Arr[i]=-1;
        }
       
    }
    for(int i=0;i<4;i++)
    {
        cout<<Arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
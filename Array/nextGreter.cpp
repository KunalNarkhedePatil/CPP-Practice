#include<iostream>
using namespace std;

int main()
{
    int Arr[5]={4,7,8,3,2};

    int i=0;
    int j=0;

    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(Arr[i]<Arr[j])
            {
                break;
            }
        }
        if(j<5)
        {
            Arr[i]=Arr[j];
        }
        else
        {
            Arr[i]=-1;
        }
    }

    for(int i=0;i<5;i++)
    {
        cout<<Arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
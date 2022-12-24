#include<iostream>
using namespace std;
int findpivot(int Arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        if(i+1<size-1)
        {
            if(Arr[i+1]>Arr[i])
            {
                continue;
            }
            else
            {
                return Arr[i+1];
            }
        }
    }
}
int main()
{
    int Arr[8]={4,5,6,7,8,1,2,3};

    cout<<"pivot element is "<<findpivot(Arr,8);
    return 0;
}
#include<iostream>
using namespace std;
void insert(int Arr[],int size,int ipos,int iNo)
{
    for(int i=size;i>=ipos;i--)
    {
        if(i==ipos)
        {
            Arr[i]=iNo;
            break;
            
        }
        Arr[i]=Arr[i-1];
    }
}

void printArray(int Arr[],int n)
{
    
    for(int i=0;i<n;i++)
    {
        cout<<Arr[i]<<" ";
    }
}
int main()
{
    int Arr[5]={1,2,4,5};

    insert(Arr,4,3-1,3);
    printArray(Arr,5);
    return 0;
}